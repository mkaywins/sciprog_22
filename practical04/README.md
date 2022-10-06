
# Practical 04

The repository contains 1 source code file:
* `Tan.c`: A C-program which converts a sequence of degrees in range $[0,60]$ to radians and subsequently computes $tan(x)$ based on the radians that were previously converted. The values are stored in an array. The array is initialised as a gloabl variable. The program prints the array. The program utilises a function `aucurve()` to approximate the area under the curve for $tan(x)$ through the Trapezoidal Rule. The range for $x$ (in degrees) is $[0,60]$. The function is able to access the previously computed values for $tan(x)$ through the globally defined array. The function takes only the number of elements in the array (13) as an input as the values for $tan(x)$ are already stored in the global array. Ultimately, the area is printed. The area is the same as in `Practical03`.



## How to compile and run the program?

`Tan.c`:

To compile the C code, one needs to write the following lines:
```
gcc -lm -o Tan.exe Tan.c
```
This creates an executable called `Tan.exe`. Note, the option `-lm` is needed to link the `math.h` library through the gcc compiler. To execute the executable, enter the following lines:

```
./Tan.exe
```
  