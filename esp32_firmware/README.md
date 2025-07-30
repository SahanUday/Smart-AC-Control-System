# 🌡️ ESP32 Smart AC Control Firmware

This project is an **intelligent AC control system** built using **ESP32** and **Firebase**, designed to provide automated air conditioning management through AI-powered temperature optimization, occupancy detection, and smart scheduling.

---

## 📌 Overview

The **ESP32 Smart AC Control Firmware** is an IoT-based solution that:

* **Connects to Firebase** for real-time cloud-based control and monitoring
* **Sends IR commands** to control AC units wirelessly
* **Implements multiple control modes**: Basic, Scheduled, Occupancy-based, and Smart AI modes
* **Provides real-time feedback** through LED indicators and serial monitoring
* **Supports AI temperature optimization** based on environmental conditions
* **Offers hybrid control modes** combining occupancy detection with smart temperature management

It's an efficient way to automate air conditioning systems with intelligent features and remote cloud connectivity.

---

## 🔍 Key Features

* 🚀 **Multi-Mode Operation**: Basic manual control, scheduled automation, occupancy detection, and AI-powered smart control
* 🌐 **Firebase Integration**: Real-time cloud database connectivity for remote monitoring and control
* 📡 **IR Communication**: Wireless infrared command transmission to AC units
* 💡 **Visual Feedback**: LED indicator for command transmission status
* 🔄 **Smart Delays**: 30-second command intervals to prevent system overload
* 🏠 **Occupancy Detection**: Automatic AC control based on room occupancy
* 🧠 **AI Temperature Management**: Intelligent temperature setting based on environmental data
* ⏰ **Scheduled Control**: Time-based automation for energy efficiency
* 🔧 **Configurable Settings**: Easy credential management through config files

---

## 🔧 Technologies & Tools Used

* **ESP32 Microcontroller** – Core processing unit with Wi-Fi capability
* **Firebase Realtime Database** – Cloud-based data storage and real-time synchronization
* **IRremote Library** – Infrared signal transmission for AC control
* **Arduino IDE** – Development environment for ESP32 programming
* **C++** – Primary programming language for firmware
* **Wi-Fi Connectivity** – Wireless network communication

> ![ESP32](https://img.shields.io/badge/ESP32-%23000000.svg?logo=espressif&logoColor=white)
> ![Firebase](https://img.shields.io/badge/Firebase-%23039BE5.svg?logo=firebase&logoColor=white)
> ![Arduino](https://img.shields.io/badge/Arduino-%2300979D.svg?logo=Arduino&logoColor=white)
> ![C++](https://img.shields.io/badge/C++-%2300599C.svg?logo=c%2B%2B&logoColor=white)

---

## ⚙️ How It Works

1. **ESP32 connects** to Wi-Fi network and synchronizes with Firebase
2. **System reads** control parameters from Firebase database
3. **Mode selection** determines the control strategy (Basic/Scheduled/Occupancy/Smart)
4. **IR commands** are fetched from Firebase and transmitted to AC unit
5. **LED indicator** provides visual feedback for successful transmission
6. **Continuous monitoring** ensures real-time responsiveness
7. **Smart delays** prevent command flooding and ensure system stability

---

## 🧰 Setup & Installation Guide

### ✅ Hardware Requirements

* ESP32 development board (ESP32-DevKitC or similar)
* IR LED transmitter
* Status indicator LED
* Resistors (220Ω for LED)
* Breadboard and jumper wires
* Stable Wi-Fi connection

### ✅ Software Requirements

* [Arduino IDE](https://www.arduino.cc/en/software) (1.8.19 or later)
* ESP32 Board Package for Arduino IDE
* Required Libraries (install through Library Manager):
  - `Firebase ESP Client` by Mobizt
  - `IRremote` by shirriff
  - `WiFi` (built-in ESP32 library)

---

### 🔐 Configuration Setup

**1. Create Configuration File:**
```bash
# In the esp32_firmware directory
cp config.h.template config.h
```

**2. Edit `config.h` with Your Credentials:**
```cpp
// Wi-Fi Configuration
#define WIFI_SSID "your_wifi_network_name"
#define WIFI_PASSWORD "your_wifi_password"

// Firebase Configuration  
#define API_KEY "your_firebase_api_key"
#define DATABASE_URL "your_firebase_database_url"

// Firebase Authentication
#define FIREBASE_USER_EMAIL "your_email@example.com"
#define FIREBASE_USER_PASSWORD "your_firebase_password"
```

**3. Hardware Pin Configuration:**
```cpp
#define IR_LED_PIN 3              // IR transmitter pin
#define LED_INDICATOR_PIN 2       // Status LED pin
```

---

### 🚀 Upload & Deploy

**1. Open Arduino IDE:**
```bash
# Open the firmware file
ESP32_new_updated.ino
```

**2. Configure Board Settings:**
- **Board**: "ESP32 Dev Module" 
- **Upload Speed**: "921600"
- **CPU Frequency**: "240MHz (WiFi/BT)"
- **Port**: Select your ESP32 port

**3. Upload Firmware:**
- Verify code compilation
- Upload to ESP32 board
- Monitor Serial output (115200 baud)

**4. Monitor Operation:**
```bash
# Serial Monitor Output Examples:
✅ Connected to Wi-Fi
✅ Firebase connected
✅ IR emitter ready
✅ IR command sent
```

---

## 🎮 Control Modes

### 🔹 **Basic Mode**
- Direct manual control via Firebase commands
- Immediate IR transmission upon command change
- Simple on/off and temperature control

### 🔹 **Scheduled Mode** 
- Time-delayed command execution
- Configurable delay periods (minutes)
- Energy-efficient automation

### 🔹 **Occupancy Mode**
- Room occupancy detection integration
- Automatic AC control based on presence
- AI-optimized temperature when occupied
- Auto-shutdown when room is empty

### 🔹 **Smart Mode**
- AI-powered temperature optimization
- Environmental condition analysis
- Intelligent energy management

### � **Hybrid Modes**
- **Smart + Occupancy**: Combined AI optimization with presence detection
- Adaptive control based on multiple parameters
- Maximum efficiency and comfort

---

## 🔒 Security Features

**🚨 IMPORTANT**: This firmware uses secure credential management to protect your sensitive information.

- ✅ **Configuration File Protection**: `config.h` is automatically ignored by Git
- ✅ **Template System**: Safe `config.h.template` for sharing and setup
- ✅ **No Hardcoded Credentials**: All sensitive data externalized
- ✅ **Firebase Authentication**: Secure cloud database access
- ❌ **Never Commit**: The actual `config.h` file should NEVER be uploaded to GitHub

### 🛡️ Security Best Practices:
1. Always use the template system for credential management
2. Regularly rotate Firebase API keys and passwords
3. Monitor Firebase usage for unauthorized access
4. Use strong Wi-Fi passwords and WPA3 encryption

---

## � Troubleshooting & Support

### ⚠️ Common Issues & Solutions

**🚫 Compilation Error: "config.h not found"**
```cpp
// Solution:
1. Ensure config.h is created from template
2. Verify file is in same directory as .ino file
3. Check file permissions and accessibility
```

**📡 Wi-Fi Connection Problems**
```cpp
// Troubleshooting Steps:
1. Verify Wi-Fi credentials in config.h
2. Check network signal strength
3. Ensure ESP32 is within router range
4. Try different Wi-Fi channels
5. Restart router if necessary
```

**🔥 Firebase Connection Issues**
```cpp
// Debug Steps:
1. Validate Firebase API key and database URL
2. Check Firebase authentication credentials
3. Verify Firebase database rules allow read/write
4. Monitor Firebase console for error logs
5. Test internet connectivity
```

**📊 IR Command Not Working**
```cpp
// Solutions:
1. Check IR LED wiring and pin connections
2. Verify IR signal data in Firebase
3. Test with different AC models/brands
4. Adjust IR LED positioning and distance
5. Monitor serial output for transmission confirmations
```

### 📈 Performance Optimization

- **Reduce Firebase polling frequency** for battery-powered applications
- **Optimize command delay intervals** based on AC response time
- **Use deep sleep modes** for energy-efficient operation
- **Implement local caching** for frequently used IR signals

---

## 📊 Serial Monitor Output

The firmware provides comprehensive logging via Serial Monitor (115200 baud):

```cpp
🔌 Connecting to Wi-Fi...
✅ Wi-Fi Connected: 192.168.1.100
⏰ Time synced successfully
🔥 Firebase connection established
📡 IR emitter initialized
🎯 Fetching IR signal from: raw_signals/AC_ON
✅ IR command sent successfully
📊 Mode: Smart + Occupancy | Status: Active
⏳ Waiting 30s before next command...
```

### 🎛️ Debug Information:
- Network connection status
- Firebase authentication results  
- IR signal retrieval and transmission
- Mode switching notifications
- Error messages with detailed descriptions
- Performance metrics and timing information

---

## 🤝 Contributing

We welcome contributions to enhance the Smart AC Control System! Here are ways you can help:

### 🌟 Feature Requests:
- 📱 **Mobile App Integration**: Native iOS/Android applications
- 🏠 **Multi-Room Support**: Control multiple AC units simultaneously  
- 📊 **Energy Monitoring**: Power consumption tracking and analytics
- 🌡️ **Advanced Sensors**: Temperature, humidity, and air quality integration
- 🔐 **Enhanced Security**: Two-factor authentication and encryption
- 📈 **Machine Learning**: Predictive temperature control algorithms

### 🛠️ Development Guidelines:
1. Fork the repository and create feature branches
2. Follow existing code style and documentation standards
3. Test thoroughly with different ESP32 boards and AC models
4. Submit detailed pull requests with clear descriptions
5. Update documentation for new features

---

## 🛠️ Built With

🔧 **ESP32** – Powerful microcontroller with Wi-Fi and Bluetooth capabilities  
🔥 **Firebase** – Real-time cloud database and authentication services  
📡 **IRremote Library** – Reliable infrared signal transmission  
⚙️ **Arduino IDE** – User-friendly development environment  
🔨 **C++** – Efficient and robust programming language  
📱 **Cloud Integration** – Seamless remote monitoring and control

---

## 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](../LICENSE) file for details.

---

## 🆘 Support & Contact

- 📧 **Issues**: [GitHub Issues](https://github.com/SahanUday/Smart-AC-Control-System/issues)
- 📚 **Documentation**: Check the project wiki for detailed guides
- 💬 **Discussions**: Join community discussions for tips and tricks
- 🔔 **Updates**: Watch the repository for latest releases and features

---

**⭐ Star this repository if you find it helpful!**
