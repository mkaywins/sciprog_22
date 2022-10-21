# Practical 06

The repository contains 3 files:

* `main.c`: A C-program which computes the product of two matrices $A$ and $B$ and assigns it to a matrix $C$. The matrix $C$ is printed. A matrix in this program is defined as a struct which holds the number of columns, the number of rows and the data of the matrix, i.e. a 2-D array. An auxiallary function named `printmat()` was provided as a method of printing any given matrix. The program `main.c` depends on `mm.c`.

* `mm.c`: A C-program that provides a function called `matmult()` to compute the product of two matrices. This function is then called in `main.c`.

* `Makefile`: A Makefile that compiles and links the two source files `main.c` and `mm.c` and creates an executable called `mmc`.

## How to compile and run the program?

To compile the C code, one needs to write the following lines:
```
make
```
This creates an executable called `mmc`. To execute the executable, enter the following lines:

```
./mmc
```
  