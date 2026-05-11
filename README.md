# Opencv IMG = IMG.png
Using OpenCV in C++ to convert an image to PNG format

# For Use
In Terminal : ./imgtopng teste.jpg

# Compiler Code 
g++ main.cpp -o imgtopng $(pkg-config --cflags --libs opencv4)