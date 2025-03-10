
# A camera application developed using Qt and OpenCV.

## Features
- Open/Close camera functionality
- Camera connection monitoring (Detects and reports connection loss)
- Captures frames using OpenCV and displays them in a Qt UI

## Installation
### Prerequisites
- OpenCV
- Qt5 or Qt6

### Steps
1. **Clone the repository**
   ```bash
   git clone https://github.com/yourusername/QtOpenCVCamera.git
   cd QtOpenCVCamera
   ```
2. **Open the project**
   - Open the `.sln` file in Visual Studio.
   - If using Qt Creator, open the `CMakeLists.txt` or `.pro` file.

3. **Build and Run**
   - Compile the project and run `QtOpenCVCamera.exe` (Windows) or `./QtOpenCVCamera` (Linux/Mac).

## Usage
1. Click **"Open Camera"** to start the camera.
2. If the camera connection is lost, an error message will appear.
3. Click the button again to close the camera.
