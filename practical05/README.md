# Practical 05

The repository contains 2 source code files:
* `Fibonacci`: A `C` program which computes the Fibonacci series up to index $N$.The value for $N$ is provided by the user. The program utilises pointers to iteratively change the r-values associated with $F_{n-1}$ and $F_{n-2}$, where $F_n = F_{n-1} + F_{n-2}$. The variables are initialised to $F_0 = 0$ and $F_1 = 1$. The sequence is printed at the end.
* `ArcTanh.c`: A `C` program which compares the accuracy of two numerical approximations of the Inverse Hyperbolic Tangent function. The first method uses a Maclaurin series to approximate the function. The series is cut-off at the $n$-th summand as the $n$-th summand falls below a given threshold (provided by the user). The second method uses natural logarithms to approximate the function. Both approximations for $artanh(x)$ are tested on the interval $[-0.9,0.9]$. The sums of absolute errors wrt. the function `atanh(.)`, provided by the library `math.h`, are computed for both methods. Ultimately, the sums of abolute errors for both methods are printed.

---

## How to compile and run the programs?

`Fibonacci.c`:

To compile the C code, one needs to write the following lines:
```
gcc -o Fibonacci.exe Fibonacci.c
```
This creates an executable called `Fibonacci.exe`. To execute the executable, enter the following lines:

```
./Fibonacci.exe
```

---

`ArcTanh.c`:

To compile the C code, one needs to write the following lines:
```
gcc ArcTanh.c -lm -o ArcTanh.exe
```
This creates an executable called `ArcTanh.exe`. Note, the option `-lm` is needed to link the `math.h` library through the gcc compiler. To execute the executable, enter the following lines:

```
./ArcTanh.exe
```
