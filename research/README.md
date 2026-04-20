# 🔬 Desktop Application for Fire Safety Assessment

A desktop application for assessing room fire safety based on modeling the spread of hazardous fire factors and calculating fire detector response time.

## 🛠️ Technologies

![C++](https://img.shields.io/badge/C++-00599C?style=flat&logo=c%2B%2B&logoColor=white)
![Qt](https://img.shields.io/badge/Qt-41CD52?style=flat&logo=qt&logoColor=white)

| | |
| :--- | :--- |
| **Language** | C++ |
| **Framework** | Qt |
| **Paradigm** | OOP |
| **Type** | Desktop GUI Application |

## ⚙️ Features

- Fire alarm response time calculation (smoke and heat detectors)
- Detector placement verification and compliance with standard distances
- Modeling of various fire scenarios
- Visualization of calculation results

## 📐 Mathematical Model
T_resp = T_spread + T_detect + T_process


- **T_spread** — time for smoke / heat to reach the detector
- **T_detect** — sensitive element activation time
- **T_process** — signal processing time by equipment

## 🗂️ Architecture

| Module | Purpose |
| :--- | :--- |
| **Response Time Calculator** | Calculates fire detection time based on room and detector parameters |
| **Compliance Module** | Verifies results against established standards |
| **Visualization Module** | Graphical representation of results |
