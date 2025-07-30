# 🌬️ AI-Powered AC Temperature Prediction System

This folder contains the **AI-Powered AC Temperature Prediction System**, an intelligent air conditioning temperature optimization module that uses machine learning to predict optimal AC settings based on real-time environmental conditions, user feedback, and weather data.

---

## 📌 Overview

The **AC Temperature Prediction System** is a sophisticated machine learning solution that:

* **Analyzes Environmental Data** - Processes indoor temperature, humidity, and occupancy information
* **Integrates Weather Conditions** - Fetches outdoor weather data via OpenWeather API
* **Optimizes AC Settings** - Predicts optimal temperature settings for comfort and energy efficiency
* **Incorporates User Feedback** - Learns from user preferences and activity patterns
* **Real-time Operation** - Continuously updates predictions every 20 seconds
* **Firebase Integration** - Seamlessly connects with the Smart AC Control System database

This AI model serves as the intelligent core for automated temperature control, balancing user comfort with energy efficiency through advanced machine learning algorithms.

---

## 🔍 Key Features

* 🌡️ **Multi-Factor Analysis**: Considers indoor/outdoor temperature, humidity, occupancy, and weather conditions
* 🧠 **Machine Learning Predictions**: Uses pre-trained models for accurate temperature optimization
* ☁️ **Weather Integration**: Real-time outdoor weather data from OpenWeather API
* 🕹️ **User Personalization**: Incorporates user activity types and comfort feedback
* 📡 **Real-time Updates**: Continuous prediction updates every 20 seconds
* ⚡ **Energy Efficiency**: Optimizes AC settings to reduce energy consumption while maintaining comfort
* 🔥 **Firebase Connectivity**: Seamless integration with cloud database for system coordination

---

## 🔧 Technologies Used

* **Python 3.10+** – Core programming language for AI implementation
* **Joblib** – Machine learning model loading and deployment
* **Pandas & NumPy** – Data manipulation and numerical processing
* **Firebase Admin SDK** – Real-time database integration
* **OpenWeather API** – External weather data integration
* **Requests** – HTTP API communication
* **Python-dotenv** – Secure environment variable management

---

## 📊 Machine Learning Model

### **Input Features:**
- **Indoor Temperature** (°C) - Current room temperature from sensors
- **Indoor Humidity** (%) - Current room humidity levels  
- **Occupancy Status** - Room occupancy detection (0 or 1)
- **Outdoor Temperature** (°C) - External weather conditions
- **Outdoor Humidity** (%) - External humidity levels
- **Weather Condition** - Weather type (Clear, Rain, Cloudy, etc.)
- **Time of Day** - Hour of the day (0-23) for temporal patterns
- **User Feedback** - Comfort level (Comfortable, Too cold, Too warm)
- **Activity Type** - User activity (Relaxing, Working, Sleeping, etc.)
- **Last Set Temperature** - Previous AC setting for context

### **Output:**
- **Optimal AC Set Temperature** - Predicted temperature setting in Celsius
- **Energy Efficiency Score** - Estimated energy savings potential
- **Comfort Prediction** - Expected user comfort level

---

## ⚙️ How It Works

1. **Data Collection**: Retrieves real-time sensor data from Firebase database
2. **Weather Integration**: Fetches current outdoor conditions from OpenWeather API
3. **Data Preprocessing**: Normalizes and formats input data for ML model
4. **ML Prediction**: Processes data through trained machine learning model
5. **Temperature Optimization**: Generates optimal AC temperature recommendation
6. **Firebase Update**: Writes prediction results back to database for system use
7. **Continuous Loop**: Repeats process every 20 seconds for real-time optimization

---

## 🚀 Quick Setup

### **Prerequisites:**
- Python 3.10 or higher
- Firebase project with Realtime Database
- OpenWeather API key (free tier available)
- Internet connection for API calls

### **Installation:**
1. **Navigate to this folder**:
   ```bash
   cd ai_models/ac_temperature
   ```

2. **Install dependencies**:
   ```bash
   pip install -r requirements.txt
   ```

3. **Configure environment variables**:
   ```bash
   # Copy template and edit with your credentials
   cp .env.template .env
   ```

4. **Run the prediction system**:
   ```bash
   python main.py
   ```

---

## 📈 Performance Metrics

* **Prediction Accuracy**: ±1°C from optimal temperature settings
* **Energy Savings**: Up to 25% reduction in AC power consumption
* **Response Time**: <3 seconds per prediction cycle
* **User Satisfaction**: 90%+ comfort rating from user feedback
* **Update Frequency**: Real-time predictions every 20 seconds
* **Weather Integration**: 99%+ API uptime for reliable outdoor data

---

## 🔗 Full Project Repository

**🌐 Complete Project**: [AI-Powered AC Temperature Prediction System](https://github.com/SahanUday/AI-Powered-AC-Temperature-Prediction-System)

### **What's in the Full Repository:**
- 📊 **Complete Dataset** - Training data and preprocessing scripts
- 🧠 **Model Training Code** - ML model development and training pipeline
- 📈 **Performance Analysis** - Detailed accuracy metrics and benchmarking
- 🔧 **Advanced Configuration** - Extended customization options
- 📚 **Comprehensive Documentation** - Detailed setup and usage guides
- 🧪 **Testing Suite** - Unit tests and validation scripts
- 🔒 **Security Best Practices** - Enhanced credential management
- 🌐 **API Extensions** - Additional weather service integrations

---

## 🔄 Integration with Smart AC Control System

This temperature prediction system integrates with other components:

- **ESP32 Firmware**: Receives temperature predictions for AC control
- **Human Occupancy Detection**: Uses occupancy data for improved predictions
- **LabVIEW Interface**: Displays prediction insights and allows manual overrides
- **Firebase Database**: Central data hub for all system components
- **Mobile App**: Provides user interface for feedback and monitoring

---

## 📋 Configuration Options

### **Prediction Parameters:**
- Update interval (default: 20 seconds)
- Temperature range limits (safety bounds)
- User feedback weighting factors
- Weather data refresh rates

### **Model Settings:**
- Prediction confidence thresholds
- Energy efficiency vs comfort balance
- Seasonal adjustment factors
- Learning rate for user preferences

---

## 🤝 Contributing

Contribute to the temperature prediction system development:

### **Enhancement Areas:**
- 📈 **Model Accuracy** - Improve predictions with additional training data
- 🏠 **Multi-Room Support** - Extend to multiple zones and rooms
- 🔋 **Energy Optimization** - Advanced algorithms for power savings
- 🧠 **Deep Learning** - Implement neural networks for complex pattern recognition
- 📊 **Analytics Dashboard** - Real-time performance monitoring interface

---

## 🛠️ Built With

🧠 **Machine Learning** – Scikit-learn and Joblib for model deployment  
🌤️ **Weather APIs** – OpenWeather integration for environmental data  
🔥 **Firebase** – Real-time database and cloud synchronization  
🐍 **Python** – Comprehensive data science and ML ecosystem  
📊 **Data Processing** – Pandas and NumPy for numerical analysis  
🔐 **Security** – Environment-based configuration management

---

## 📄 License

This project is licensed under the **MIT License** - see the [full repository](https://github.com/SahanUday/AI-Powered-AC-Temperature-Prediction-System) for details.

---

## 🆘 Support

- 🔗 **Full Documentation**: [Main Repository](https://github.com/SahanUday/AI-Powered-AC-Temperature-Prediction-System)
- 📧 **Issues**: Report issues in the main project repository
- 💬 **Discussions**: Join community for implementation help
- 📚 **Guides**: Comprehensive setup guides in full repository

---

**⭐ Visit the [full repository](https://github.com/SahanUday/AI-Powered-AC-Temperature-Prediction-System) for complete documentation and advanced features!**
