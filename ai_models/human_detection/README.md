# 🕵️‍♂️ AI-Powered Human Occupancy Detection System

This folder contains the **AI-Powered Human Occupancy Detection System**, an intelligent computer vision solution that detects human presence in real-time using ESP32-CAM modules and deep learning models to enable automated occupancy-based AC control.

- 🔗 **Full Documentation**: [Main Repository](https://github.com/SahanUday/AI-powered-human-occupancy-detection-system)

---

## 📌 Overview

The **Human Occupancy Detection System** is a sophisticated computer vision solution that:

* **Real-time Image Capture** - Uses ESP32-CAM modules for continuous room monitoring
* **AI-Powered Detection** - Employs MobileNetV2 deep learning model for accurate human detection
* **Binary Classification** - Determines room occupancy status (occupied/not_occupied)
* **Firebase Integration** - Updates occupancy status in real-time database
* **IoT Connectivity** - Seamless integration with ESP32-based hardware
* **Robust Processing** - Handles various lighting conditions and image qualities

This system provides the occupancy intelligence needed for the Smart AC Control System to automatically adjust air conditioning based on room presence, significantly improving energy efficiency.

---

## 🔍 Key Features

* 📸 **ESP32-CAM Integration**: Direct image capture from IoT camera modules
* 🧠 **Deep Learning Detection**: MobileNetV2-based neural network for human recognition
* ⚡ **Real-time Processing**: Fast image analysis with <2 second response time
* 🔄 **Continuous Monitoring**: Configurable detection intervals for ongoing surveillance
* 🔥 **Firebase RTDB**: Real-time database updates for system-wide coordination
* 🖼️ **Image Preprocessing**: Automatic image resizing, normalization, and optimization
* 🛡️ **Error Handling**: Robust network failure and processing error management
* 🎯 **High Accuracy**: 95%+ detection accuracy with low false positive rates

---

## ⚙️ How It Works

1. **Image Capture**: ESP32-CAM captures images and serves them via HTTP endpoint
2. **Image Retrieval**: Python script fetches images from ESP32-CAM IP address
3. **Preprocessing**: Images are decoded, resized to 224x224, and normalized
4. **AI Inference**: MobileNetV2 model processes image and outputs detection probability
5. **Classification**: Probability compared to threshold to determine occupancy status
6. **Firebase Update**: Occupancy status (occupied/not_occupied) written to database
7. **Continuous Loop**: Process repeats at configurable intervals (default: 5 seconds)

---

## 🧪 Example Detection Output

```
[INFO] Image captured successfully from ESP32-CAM
[AI] Processing image... Confidence: 0.87
✅ Occupied (87% confidence)
[FIREBASE] Updated occupancy status: occupied
[TIMING] Detection cycle completed in 1.3 seconds
```

---

## 🔗 Full Project Repository

**🌐 Complete Project**: [AI-Powered Human Occupancy Detection System](https://github.com/SahanUday/AI-powered-human-occupancy-detection-system)

### **What's in the Full Repository:**
- 📊 **Complete Dataset** - Access to full Person vs No Person dataset from Kaggle
- 🧠 **Model Training Scripts** - Complete training pipeline and model development
- 🔧 **ESP32-CAM Firmware** - Camera module configuration and setup guides
- 📈 **Performance Analysis** - Detailed accuracy metrics and benchmarking results
- 🖼️ **Image Logging** - Debug features for captured image analysis
- 🔒 **Security Features** - Enhanced credential management and data protection
- 📚 **Comprehensive Docs** - Detailed installation, configuration, and usage guides
- 🧪 **Testing Suite** - Validation scripts and performance testing tools

---

## 🔄 Integration with Smart AC Control System

This occupancy detection system integrates with other components:

- **AC Temperature Prediction**: Provides occupancy data for intelligent temperature optimization
- **ESP32 Firmware**: Receives occupancy status for automated AC control decisions  
- **LabVIEW Interface**: Displays real-time occupancy status and detection confidence
- **Firebase Database**: Central hub for occupancy data distribution
- **Mobile App**: Shows occupancy history and detection analytics

---

## 🤝 Contributing

Contribute to the occupancy detection system development:

### **Enhancement Areas:**
- 📈 **Model Accuracy** - Improve detection with advanced neural architectures
- 🖼️ **Multi-Camera Support** - Expand to multiple ESP32-CAM modules
- 🔍 **Advanced Analytics** - Add person counting and movement tracking
- 🌙 **Low-Light Performance** - Enhance detection in various lighting conditions
- 📊 **Real-time Dashboard** - Web interface for monitoring and configuration
- 🔋 **Power Optimization** - Reduce power consumption for battery operation

---

## 🛠️ Built With

🧠 **Deep Learning** – TensorFlow and Keras for neural network implementation  
👁️ **Computer Vision** – OpenCV for image processing and analysis  
📱 **IoT Hardware** – ESP32-CAM for edge image capture  
🔥 **Firebase** – Real-time database for cloud synchronization  
🐍 **Python** – Comprehensive AI and computer vision ecosystem  
🌐 **HTTP/REST** – Network communication protocols for data transfer
