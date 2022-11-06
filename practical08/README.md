# Practical 08

The repository contains 2 files:

* `GCDIter.c`: A C-program which computes the greatest common divisor of two non-zero integers in an iterative way by using [Euclid's algorithm](https://en.wikipedia.org/wiki/Euclidean_algorithm). 

* `GCDRec.c`: A C-program which computes the greatest common divisor of two non-zero integers in a recursive way by using [Euclid's algorithm](https://en.wikipedia.org/wiki/Euclidean_algorithm). 

## How to compile and run the program?

`GCDIter.c`: 

To compile the C code, one needs to write the following lines:
```
gcc GCDIter.c -o GCDIter.exe -lm
```
This creates an executable called `GCDIter.exe`. Note, the option `-lm` is needed to link the `math.h` library through the gcc compiler. To execute the executable, enter the following lines:

```
./GCDIter.exe
```

`GCDRec.c`:

To compile the C code, one needs to write the following lines:
```
gcc GCDRec.c -o GCDRec.exe -lm
```
This creates an executable called `GCDRec.exe`. Note, the option `-lm` is needed to link the `math.h` library through the gcc compiler. To execute the executable, enter the following lines:
