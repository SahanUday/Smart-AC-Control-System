# 🕵️‍♂️ AI-Powered Human Occupancy Detection System

This folder contains the **AI-Powered Human Occupancy Detection System**, an intelligent computer vision solution that detects human presence in real-time using ESP32-CAM modules and deep learning models to enable automated occupancy-based AC control.

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

## 🔧 Technologies Used

* **Python 3.8+** – Core programming language for AI implementation
* **TensorFlow/Keras** – Deep learning framework for model training and inference
* **OpenCV** – Computer vision library for image processing
* **Firebase Admin SDK** – Real-time database integration and management
* **ESP32-CAM** – IoT hardware for image capture and streaming
* **Requests** – HTTP communication for image retrieval
* **NumPy** – Numerical processing for image data manipulation
* **Python-dotenv** – Secure environment variable management

---

## 🧠 Machine Learning Model

### **Architecture:**
- **Base Model**: MobileNetV2 (pre-trained on ImageNet)
- **Task**: Binary classification (human/no_human)
- **Input Size**: 224x224 RGB images
- **Output**: Probability score (0-1) for human presence
- **Threshold**: Configurable detection threshold (default: 0.5)

### **Training Dataset:**
- **Source**: Person vs No Person Dataset from Kaggle
- **Structure**: Binary classification with human/no_human categories
- **Size**: Thousands of diverse images for robust training
- **Preprocessing**: Standardized 224x224 resolution with normalization

### **Performance Metrics:**
- **Accuracy**: 95%+ on validation datasets
- **Precision**: 93%+ (low false positive rate)
- **Recall**: 97%+ (high detection rate)
- **F1-Score**: 95%+ (balanced performance)

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

## 🚀 Quick Setup

### **Prerequisites:**
- Python 3.8 or higher
- ESP32-CAM module with HTTP server firmware
- Firebase project with Realtime Database
- Stable Wi-Fi network for ESP32-CAM connectivity

### **Hardware Setup:**
1. **Configure ESP32-CAM** with HTTP server firmware
2. **Connect to Wi-Fi** and note the assigned IP address
3. **Position camera** for optimal room coverage
4. **Test image capture** by accessing ESP32-CAM HTTP endpoint

### **Software Installation:**
1. **Navigate to this folder**:
   ```bash
   cd ai_models/human_detection
   ```

2. **Install dependencies**:
   ```bash
   pip install -r requirements.txt
   ```

3. **Configure environment**:
   ```bash
   # Copy template and edit with your settings
   cp .env.example .env
   ```

4. **Run occupancy detection**:
   ```bash
   python occupancy_detection.py
   ```

---

## 📊 System Performance

* **Detection Accuracy**: 95%+ human presence detection
* **Response Time**: <2 seconds per detection cycle
* **False Positive Rate**: <5% under normal lighting conditions
* **Detection Range**: Effective up to 5 meters from camera
* **Network Tolerance**: Handles temporary connectivity issues gracefully
* **Power Efficiency**: Optimized for continuous operation with minimal power consumption

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

## 📋 Configuration Options

### **Detection Parameters:**
- Detection interval (default: 5 seconds)
- Confidence threshold (default: 0.5)
- Image quality settings
- Network timeout configurations

### **Hardware Settings:**
- ESP32-CAM IP address configuration
- Image resolution and quality settings
- Network connection parameters
- Power management options

### **Firebase Integration:**
- Database path configuration
- Update frequency settings
- Error handling parameters
- Offline mode capabilities

---

## 🛠️ Hardware Requirements

### **ESP32-CAM Specifications:**
- **Processor**: ESP32 with 2MP camera (OV2640)
- **Memory**: 4MB Flash, 520KB SRAM
- **Connectivity**: Wi-Fi 802.11 b/g/n
- **Power**: 5V via USB or 3.3V direct
- **Camera**: 2 megapixel with adjustable resolution

### **Network Requirements:**
- **Wi-Fi**: 2.4GHz network access
- **Bandwidth**: Minimum 1 Mbps for image transmission
- **Latency**: <100ms for real-time operation
- **Range**: ESP32-CAM within Wi-Fi coverage area

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

## 🧪 Example Detection Output

```
[INFO] Image captured successfully from ESP32-CAM
[AI] Processing image... Confidence: 0.87
✅ Occupied (87% confidence)
[FIREBASE] Updated occupancy status: occupied
[TIMING] Detection cycle completed in 1.3 seconds
```

---

## 🛠️ Built With

🧠 **Deep Learning** – TensorFlow and Keras for neural network implementation  
👁️ **Computer Vision** – OpenCV for image processing and analysis  
📱 **IoT Hardware** – ESP32-CAM for edge image capture  
🔥 **Firebase** – Real-time database for cloud synchronization  
🐍 **Python** – Comprehensive AI and computer vision ecosystem  
🌐 **HTTP/REST** – Network communication protocols for data transfer

---

## 📄 License

This project is licensed under the **MIT License** - see the [full repository](https://github.com/SahanUday/AI-powered-human-occupancy-detection-system) for details.

---

## 🆘 Support

- 🔗 **Full Documentation**: [Main Repository](https://github.com/SahanUday/AI-powered-human-occupancy-detection-system)
- 📧 **Issues**: Report issues in the main project repository
- 💬 **Community**: Join discussions for implementation help and tips
- 📚 **Guides**: Step-by-step tutorials in the complete repository
- 🎥 **Demos**: Video demonstrations and setup walkthroughs

---

**⭐ Visit the [full repository](https://github.com/SahanUday/AI-powered-human-occupancy-detection-system) for complete documentation, datasets, and advanced features!**
