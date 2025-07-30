# 📱 Smart AC Remote Control Mobile App - Airvix

This folder contains the **Airvix Smart AC Remote Control Mobile App**, a comprehensive Android application built with Flutter that provides intelligent air conditioning control through geofencing, AI-driven temperature adjustments, scheduling, and real-time monitoring capabilities.

---

## 📌 Overview

The **Airvix Mobile App** is a sophisticated smart home control application that:

* **Remote AC Control** - Complete air conditioning management from anywhere
* **Geofencing Automation** - Location-based automatic AC control
* **AI-Powered Optimization** - Intelligent temperature adjustments based on environmental data
* **Real-time Monitoring** - Live sensor data display and system status
* **Scheduling System** - Automated time-based AC operations
* **User Feedback Integration** - Personalized comfort settings through user input
* **Firebase Integration** - Seamless cloud synchronization with the Smart AC Control System

This mobile application serves as the primary user interface for the entire Smart AC Control System, enabling users to monitor, control, and optimize their air conditioning from their Android devices.

---

## 🔍 Key Features

* 🎮 **Complete AC Control**: Power toggle, temperature adjustment, and mode selection (Cool, Heat, Fan, Dry)
* 📍 **Smart Geofencing**: Automatic AC control based on user proximity to home location
* 🧠 **AI Integration**: Intelligent temperature recommendations using occupancy and environmental data
* ⏰ **Advanced Scheduling**: Flexible timer-based automation with customizable actions
* 📊 **Real-time Dashboard**: Live display of indoor/outdoor temperature, humidity, weather, and occupancy
* 💬 **User Feedback System**: Comfort level input and activity tracking for AI optimization
* 🔐 **Secure Authentication**: Email-based login using Firebase UI Auth
* 🌐 **Cloud Synchronization**: Real-time data sync with Firebase Realtime Database

---

## 🔧 Technologies Used

* **Flutter** – Cross-platform mobile development framework (Android-focused)
* **Firebase Realtime Database** – Cloud data storage and real-time synchronization
* **Firebase UI Auth** – Secure user authentication and session management
* **Geolocator** – GPS-based location services for geofencing functionality
* **Fluttertoast** – User notification and feedback system
* **Dart** – Primary programming language for Flutter development
* **Android Studio** – Integrated development environment

---

## 📱 App Interface Components

### 🏠 **Home Page**
- **Real-time sensor display** with temperature, humidity, and weather data
- **Manual AC control panel** with intuitive circular temperature interface
- **Quick mode selection** for different AC operations
- **System status indicators** showing current operational state

### 🧠 **Smart Control Page**
- **AI toggle switches** for intelligent automation features
- **User feedback inputs** for comfort level and activity type
- **Occupancy-based control** settings and preferences
- **Learning algorithm** status and recommendations

### 📍 **Geofencing Page**
- **Location-based automation** setup and configuration
- **Entry/Exit action** selection for automatic AC control
- **Geofence area** customization with radius and coordinate settings
- **Real-time location status** (Home/Away) monitoring

### ⏰ **Scheduler Page**
- **Timer-based automation** with flexible duration options
- **Action selection** for scheduled AC commands
- **Schedule management** with enable/disable toggles
- **Duration presets** (30 seconds to multiple hours)

---

## 🚀 Quick Setup

### **Prerequisites:**
- Android device (API level 21+)
- Flutter SDK installed for development
- Firebase project configured
- Internet connection for cloud features

### **For End Users:**
1. **Download APK** from the releases section
2. **Install** on Android device (enable unknown sources if needed)
3. **Login** with email credentials
4. **Configure** geofencing and preferences
5. **Start controlling** your AC remotely

### **For Developers:**
1. **Clone the repository** (see full repository link below)
2. **Install Flutter dependencies** with `flutter pub get`
3. **Configure Firebase** with your project credentials
4. **Run** with `flutter run` on connected Android device

---

## 📊 Performance & Features

* **Response Time**: <2 seconds for AC command execution
* **Location Accuracy**: GPS-based geofencing with customizable radius
* **Data Sync**: Real-time Firebase synchronization with <1 second latency
* **Battery Optimization**: Efficient background location monitoring
* **User Interface**: Intuitive design with accessibility features
* **Offline Mode**: Limited functionality available without internet connection

---

## 🔗 Full Project Repository

**🌐 Complete Airvix App**: [Airvix - Smart AC Remote Control App](https://github.com/SahanUday/Airvix-App)

### **What's in the Full Repository:**
- 📱 **Complete Source Code** - Full Flutter application with all features
- 🔧 **Build Configuration** - Android build files and deployment settings
- 📚 **Comprehensive Documentation** - Detailed setup guides and API documentation
- 🔥 **Firebase Setup Guide** - Complete Firebase configuration instructions
- 📋 **Requirements Documentation** - System requirements and dependencies
- 🎨 **UI/UX Assets** - App icons, images, and design resources
- 🧪 **Demo Materials** - Video demonstrations and screenshot gallery
- 📦 **APK Releases** - Pre-built application packages for direct installation
- 🔒 **Security Templates** - Configuration templates for secure deployment

---

## 🔄 Integration with Smart AC Control System

The Airvix mobile app integrates seamlessly with other system components:

- **ESP32 Firmware**: Sends control commands through Firebase for AC hardware control
- **AI Models**: Receives temperature predictions and occupancy data for smart automation
- **LabVIEW Interface**: Shares system data for comprehensive monitoring and control
- **Firebase Database**: Central communication hub for all system components
- **Weather APIs**: Displays real-time weather information for enhanced user experience

---

## 📋 App Functionality

### **Control Features:**
- AC power on/off toggle with visual feedback
- Temperature adjustment with +/- controls
- Mode selection (Cool, Heat, Fan, Dry) with icons
- Real-time command status and execution confirmation

### **Smart Features:**
- AI-driven temperature optimization based on occupancy
- Geofencing with customizable home location and radius
- User activity tracking for personalized comfort settings
- Scheduling with flexible duration and action options

### **Monitoring Features:**
- Real-time indoor and outdoor temperature display
- Humidity levels and weather condition updates
- Occupancy status from computer vision system
- System performance metrics and status indicators

---

## 🎥 Demo & Screenshots

The full repository includes:
- **📹 Video Demonstration** - Complete app walkthrough and feature showcase
- **📸 Screenshot Gallery** - High-quality images of all app interfaces
- **🎮 Interactive Demo** - Step-by-step usage examples
- **📱 UI/UX Showcase** - Design elements and user experience highlights

---

## 🤝 Contributing

Contribute to the Airvix mobile app development:

### **Enhancement Areas:**
- 📊 **Analytics Dashboard** - Energy usage tracking and consumption reports
- 🏢 **Multi-Room Support** - Control multiple AC units across different rooms
- 🔔 **Push Notifications** - Advanced alert system for system events
- 🎨 **UI/UX Improvements** - Enhanced visual design and accessibility features
- 🔋 **Power Management** - Optimized battery usage for background operations
- 🌐 **Cross-platform** - iOS version development and deployment

---

## 🛠️ Built With

📱 **Flutter** – Modern mobile app development framework  
🔥 **Firebase** – Comprehensive backend-as-a-service platform  
📍 **Location Services** – GPS and geofencing capabilities  
🎨 **Material Design** – Google's design system for Android  
☁️ **Cloud Integration** – Real-time data synchronization  
🔐 **Authentication** – Secure user management and session handling

---

## 📄 License

This project is licensed under the **MIT License** - see the [full repository](https://github.com/SahanUday/Airvix-App) for details.

---

## 🆘 Support & Resources

- 🔗 **Full Documentation**: [Airvix App Repository](https://github.com/SahanUday/Airvix-App)
- 📧 **Issues**: Report bugs and feature requests in the main repository
- 💬 **Community**: Join discussions for development help and tips
- 📚 **Setup Guides**: Comprehensive installation and configuration documentation
- 🎥 **Tutorials**: Video guides for setup and usage
- 📱 **APK Downloads**: Latest release versions for direct installation

---

**⭐ Visit the [Airvix App Repository](https://github.com/SahanUday/Airvix-App) for complete source code, documentation, and the latest releases!**
