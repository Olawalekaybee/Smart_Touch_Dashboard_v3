---
noteId: "cc64d310462511f1b4d72feb9f05749d"
tags: []

---

#  Smart Touch Dashboard (ESP32-S3 + LVGL + SquareLine Vision)

![Platform](https://img.shields.io/badge/ESP32--S3-CYD-blue)
![Framework](https://img.shields.io/badge/PlatformIO-Arduino-orange)
![UI](https://img.shields.io/badge/LVGL-9-purple)
![Status](https://img.shields.io/badge/status-active-success)

---

##  Overview

A modern **touchscreen dashboard UI** built for the **ESP32-S3 CYD 5-inch (800×480)** display using:

* **LVGL (Light and Versatile Graphics Library)**
* **SquareLine Vision v1.3.1**
* **PlatformIO (Arduino framework)**

This project demonstrates a **real-time interactive embedded UI system** with touch input, device control, and scalable architecture for IoT applications.

---

## 🎥 Demo Video

> Upload your video to GitHub (or YouTube) and replace the link below

```text
assets/demo/demo.mp4
```

Or embed like this (recommended for GitHub):

```md
https://github.com/Olawalekaybee/Smart_Touch_Dashboard_v3/assets/your-video-link
```

---

## ✨ Features

*  Beautiful UI designed with SquareLine Vision
*  Touchscreen interaction (fully functional)
*  Fan control switches (FAN 1, FAN 2, FAN 3)
*  Scrollable roller menu (dynamic selection)
*  Real-time event handling using LVGL
*  Clean and modular project structure
*  Serial debug output for interaction tracking

---

## 🖼️ UI Preview

> Replace with your uploaded screenshot

```md
![Dashboard](assets/screenshots/dashboard.png)
```

---

## How It Works

```text
User Touch → LVGL detects input → Object identified → Event callback triggered → Action executed
```

Example:

```text
Switch toggle → LV_EVENT_VALUE_CHANGED → FAN_event() → Serial / Relay control
```

---

##  Project Structure

```bash
Smart_Touch_Dashboard_v3/
│
├── src/
│   ├── main.cpp
│   └── gui/
│       ├── screens/
│       ├── assets/
│       ├── behavior/
│       ├── core/
│       └── helpers/
│
├── platformio.ini
├── README.md
└── .gitignore
```

---

## ⚙️ Setup Instructions

### 1. Clone the repository

```bash
git clone https://github.com/Olawalekaybee/Smart_Touch_Dashboard_v3.git
cd Smart_Touch_Dashboard_v3
```

### 2. Open in VS Code

```bash
code .
```

### 3. Build

```bash
pio run
```

### 4. Upload

```bash
pio run -t upload
```

### 5. Monitor

```bash
pio device monitor
```

---

## 📟 Example Output

```text
FAN 1 ON
FAN 1 OFF
Roller selected: Dashboard
Roller selected: Thermostat
```

---

##  Key Concepts

### Event Binding

```cpp
lv_obj_add_event_cb(object, callback, LV_EVENT_VALUE_CHANGED, NULL);
```

### Example

```cpp
lv_obj_add_event_cb(
    GUI_Switch__new_device_1__Toggle___Switch_2,
    FAN1_event,
    LV_EVENT_VALUE_CHANGED,
    NULL
);
```

---

## 🔌 Hardware

* ESP32-S3 CYD (5-inch display)
* 800×480 LCD
* Capacitive Touch Panel

---

## 🛠️ Tech Stack

* PlatformIO
* C++ (Arduino Framework)
* LVGL 9
* SquareLine Vision
* ESP32-S3

---

## 🤝 Contributing

Pull requests are welcome.

---

## 📄 License

MIT License

---

## 👨‍💻 Author

**Olawale**

---

## ⭐ Support

If you like this project, give it a ⭐ on GitHub!
