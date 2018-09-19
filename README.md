# BMP header reader
A simple C program to read BMP files header

## How to use
Clone the repository. Build the project by `cd` into de `cmake-build-debug` folder and run `make`.
Execute the `bmp_reader` binary, passing as a argument a path to a BMP file. The content of the header will be printed in the standard output.

## How it works
Checkout the methods in `lib/bmp_reader_methods.c`. They're pretty much self explanatory.
Here you have a diagram of the structure the BMP file format:
![The Structure of the Bitmap Image File](https://upload.wikimedia.org/wikipedia/commons/c/c4/BMPfileFormat.png)
