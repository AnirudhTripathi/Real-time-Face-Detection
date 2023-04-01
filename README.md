# Real time Face Detection using OpenCV-C++
This project implements real-time face detection using OpenCV library in C++ programming language. The project uses pre-trained Haar cascades classifiers to detect faces in real-time video stream captured by the webcam.

## Requirements
#### To run this project, you need the following software and libraries installed on your system:

- OpenCV library version - 3.3.1 vc14
- Visual Studio Code
- Webcam
 
#### To set up the project by adding the necessary include directories and library directories 

- Include directories: Path to the "include" folder in your OpenCV installation.
- Library directories: Path to the "lib" folder in your OpenCV installation.
 
#### Here are the process to create an environment in Visual Studio Code

**Preprocessor :**
```
_CRT_SECURE_NO_WARNINGS
_DEBUG
_CONSOLE 
```
**LINKER : (Debug Mode)**
```
opencv_world331d.lib
```
## How to use
1. Clone the repository to your local machine.
2. Install OpenCV on your system.
3. Open a terminal and navigate to the cloned repository directory.
4. Compile the project using the following command:
```
g++ -std=c++11 -Wall -pedantic -o face_detector face_detector.cpp `pkg-config --cflags --libs opencv`
```
5. Run the executable using the following command:
```bash
./face_detector
```
6. The application will start and show a live stream from your webcam. It will detect faces in real-time and draw a rectangle around them.

## Project Structure
```
├── face_detector.cpp     # main application source file
├── README.md             # README file
```

## Acknowledgements
We would like to thank the OpenCV community for providing the Haar feature-based cascade classifier and the sample code that inspired this project. Additionally, we want to acknowledge the developers of the C++ programming language and the GCC and Clang compilers for their contributions to the software development community. 
