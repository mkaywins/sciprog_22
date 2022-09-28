# Practical 03

The repository contains 1 source code file:
* `CurveArea.c`: A C-program which approximates the integral $\in_0^{\pi/3} \tan(x) dx = \log(2)$ by the Trapezoidal rule. Initially, the function `tan()` is evaluated at the end points of a sequence of equidistant points $x_0, ..., x_N$, where $N=12, x_0=0$ and $x_N = \pi/3$. The values are summed up. Subsequently, the terms $2 \cdot \tan(x_i)$ for all $i=1,...,N-1$ are computed and summed up as well. The two sums are added up and multiplied by $\frac{b-a}{2N}$. Ultimately, this consitutes the approximated area under the curve. The area and the absolute difference with respect to the analytical solution ($\log(2)$) are printed in the end.


## How to compile and run the programs?

`CureveArea.c`:

To compile the C code, one needs to write the following lines:
```
gcc -lm -o CurveArea.exe CurveArea.c
```
This creates an executable called `CurveArea.exe`. Note, the option `-lm` is needed to link the `math.h` library through the gcc compiler. To execute the executable, enter the following lines:

```
./CurveArea.exe
```
  