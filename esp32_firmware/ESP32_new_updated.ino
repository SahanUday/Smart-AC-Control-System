#include <WiFi.h>
#include <Firebase_ESP_Client.h>
#include <IRremote.hpp>
#include <time.h>
#include "config.h"  // Include configuration file

// Firebase objects
FirebaseData fbdo;
FirebaseAuth auth;
FirebaseConfig config;
Firebase_ESP_Client firebase;

// Track last sent command and time
String lastCommand = "";
unsigned long lastSentMillis = 0;

void initTime() {
  configTime(0, 0, "pool.ntp.org", "time.nist.gov");
  Serial.print("Syncing time");
  while (time(nullptr) < 8 * 3600 * 2) {
    Serial.print(".");
    delay(500);
  }
  Serial.println("\nTime synced");
}

void sendIRCommand(String commandKey, String signalPathPrefix) {
  String signalPath = signalPathPrefix + "/" + commandKey;
  Serial.print("Fetching IR signal from: ");
  Serial.println(signalPath);

  if (firebase.RTDB.getString(&fbdo, signalPath)) {
    String rawSignal = fbdo.stringData();
    Serial.print("Raw IR signal: ");
    Serial.println(rawSignal);

    std::vector<uint16_t> signal;
    int start = 0;
    while (start < rawSignal.length()) {
      int commaIndex = rawSignal.indexOf(',', start);
      if (commaIndex == -1) commaIndex = rawSignal.length();
      String token = rawSignal.substring(start, commaIndex);
      token.trim();
      if (token.length() > 0) signal.push_back((uint16_t)token.toInt());
      start = commaIndex + 1;
    }

    // Turn on LED before sending
    digitalWrite(LED_INDICATOR_PIN, HIGH);

    IrSender.sendRaw(signal.data(), signal.size(), 38);

    // Turn off LED after sending
    digitalWrite(LED_INDICATOR_PIN, LOW);

    Serial.println("✅ IR command sent.");
  } else {
    Serial.print("❌ Failed to fetch IR signal: ");
    Serial.println(fbdo.errorReason());
  }
}

void setup() {
  Serial.begin(SERIAL_BAUD_RATE);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println("\nConnected.");

  initTime();

  config.api_key = API_KEY;
  config.database_url = DATABASE_URL;
  auth.user.email = FIREBASE_USER_EMAIL;
  auth.user.password = FIREBASE_USER_PASSWORD;

  firebase.begin(&config, &auth);
  firebase.reconnectWiFi(true);

  IrSender.begin(IR_LED_PIN);
  Serial.println("IR emitter ready.");

  pinMode(LED_INDICATOR_PIN, OUTPUT);
  digitalWrite(LED_INDICATOR_PIN, LOW);
}

void loop() {
  String currentCommand;
  bool occupancyActive = false, scheduleActive = false, smartActive = false;
  int scheduleTime = 0;
  bool occupied = false;
  String aiSetTemp;

  if (!firebase.RTDB.getString(&fbdo, "ac_control/current_command")) return;
  currentCommand = fbdo.stringData();

  if (!firebase.RTDB.getBool(&fbdo, "ac_control/occupancy_active")) return;
  occupancyActive = fbdo.boolData();

  if (!firebase.RTDB.getBool(&fbdo, "ac_control/schedule_active")) return;
  scheduleActive = fbdo.boolData();

  if (!firebase.RTDB.getBool(&fbdo, "ac_control/smart_active")) return;
  smartActive = fbdo.boolData();

  unsigned long currentMillis = millis();

  if (occupancyActive == false && scheduleActive == false && smartActive == false) {
    // Basic mode
    if (currentCommand != lastCommand && currentCommand.length() > 0) {
      sendIRCommand(currentCommand, "raw_signals");
      lastCommand = currentCommand;
      lastSentMillis = currentMillis;
    }

  } else if (occupancyActive == false && scheduleActive == true && smartActive == false) {
    // Scheduled mode
    if (!firebase.RTDB.getInt(&fbdo, "ac_control/time")) return;
    scheduleTime = fbdo.intData();
    Serial.printf("🕒 Delaying for %d minutes...\n", scheduleTime);
    delay(scheduleTime * 60 * 1000);

    if (currentCommand != lastCommand && currentCommand.length() > 0) {
      sendIRCommand(currentCommand, "raw_signals");
      lastCommand = currentCommand;
      lastSentMillis = currentMillis;
    }

  } else if (occupancyActive == true && scheduleActive == false && smartActive == false) {
    // Occupancy mode (with 30s delay)
    if (!firebase.RTDB.getBool(&fbdo, "sensor_data/occupancy")) return;
    occupied = fbdo.boolData();

    if (occupied) {
      if (!firebase.RTDB.getString(&fbdo, "sensor_data/ai_set_temp")) return;
      aiSetTemp = fbdo.stringData();

      if (aiSetTemp != lastCommand && aiSetTemp.length() > 0 && currentMillis - lastSentMillis >= COMMAND_DELAY_MS) {
        sendIRCommand(aiSetTemp, "raw_signals");
        lastCommand = aiSetTemp;
        lastSentMillis = currentMillis;
      } else {
        Serial.println("⏳ Waiting 30s or same ai_set_temp.");
      }
    } else {
      if (currentCommand != lastCommand && currentCommand.length() > 0 && currentMillis - lastSentMillis >= COMMAND_DELAY_MS) {
        sendIRCommand("AC_OFF", "raw_signals");
        lastCommand = currentCommand;
        lastSentMillis = currentMillis;
      } else {
        Serial.println("⏳ Waiting 30s or same AC_OFF command.");
      }
    }

  } else if (occupancyActive == true && scheduleActive == false && smartActive == true) {
    // Smart + Occupancy mode (with 30s delay)
    if (!firebase.RTDB.getBool(&fbdo, "sensor_data/occupancy")) return;
    occupied = fbdo.boolData();

    if (occupied) {
      if (!firebase.RTDB.getString(&fbdo, "sensor_data/ai_set_temp")) return;
      aiSetTemp = fbdo.stringData();

      if (aiSetTemp != lastCommand && aiSetTemp.length() > 0 && currentMillis - lastSentMillis >= COMMAND_DELAY_MS) {
        sendIRCommand(aiSetTemp, "raw_signals");
        lastCommand = aiSetTemp;
        lastSentMillis = currentMillis;
      } else {
        Serial.println("⏳ Waiting 30s or same ai_set_temp.");
      }
    } else {
      if (currentCommand != lastCommand && currentCommand.length() > 0 && currentMillis - lastSentMillis >= COMMAND_DELAY_MS) {
        sendIRCommand(currentCommand, "AC_OFF");
        lastCommand = currentCommand;
        lastSentMillis = currentMillis;
      } else {
        Serial.println("⏳ Waiting 30s or same AC_OFF command.");
      }
    }

  } else if (occupancyActive == false && scheduleActive == false && smartActive == true) {
    // Smart-only mode (with 30s delay)
    if (!firebase.RTDB.getString(&fbdo, "sensor_data/ai_set_temp")) return;
    aiSetTemp = fbdo.stringData();

    if (aiSetTemp != lastCommand && aiSetTemp.length() > 0 && currentMillis - lastSentMillis >= COMMAND_DELAY_MS) {
      sendIRCommand(aiSetTemp, "raw_signals");
      lastCommand = aiSetTemp;
      lastSentMillis = currentMillis;
    } else {
      Serial.println("⏳ Waiting 30s or same ai_set_temp.");
    }
  }

  delay(POLL_INTERVAL_MS);  // Poll every second
}
