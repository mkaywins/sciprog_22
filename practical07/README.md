# Practical 07

The repository contains 2 files:

* `Euler.c`: A C-program which computes the Taylor series approximation of $\exp(x)$ up to a certain order $n$. Both $x$ and $n$ are provided by the user. The program prints the approximation value for all orders from 1 up to $n$. Additionally, the absolute error wrt. to the actual value for $exp(x)$ is printed. As a reference we use the `exp()` function from the library `math.h`. Observations are included as comments in the source code.

* `BasicAllocation.c`: A C-program that allocates sufficient amount of memory to create an integer array of size $n=10$, fills it with ones, prints it and then frees up the memory used for the array. Therby, $n$ is provided by the user. Auxillary functions for memory allocation/deallocation, for filling the array with ones and for printing are provided in the source code. The program also returns a string that indicates wheter the memory of the array/pointer was ultimately freed.

## How to compile and run the program?

`Euler.c`: 

To compile the C code, one needs to write the following lines:
```
gcc Euler.c -o Euler.exe -lm
```
This creates an executable called `Euler.exe`. Note, the option `-lm` is needed to link the `math.h` library through the gcc compiler. To execute the executable, enter the following lines:

```
./Euler.exe
```

`BasicAllocation.c`:

To compile the C code, one needs to write the following lines:
```
gcc BasicAllocation.c -o BasicAllocation.exe 
```
This creates an executable called `BasicAllocation.exe`. To execute the executable, enter the following lines:
```
./BasicAllocation.exe
```
