# Practical 02

The repository contains two source code files:

* `Conversion.c`: A C-program that computes the integer, float and binary representation of the number 33554431.
* `Sum.c`: A C-program that computes two version of the sum $1 + \frac{1}{2} + \frac{1}{3} + ... + \frac{1}{1000}$. The first version computes the sum in increasing order of the denominator of the indiviual summands and the second version computes the sum in decreasing order. Ultimately, the difference between the sums, that arises through floating point arithmetics (round-off errors), is printed.
 
## How to compile and run the programs?

`Conversion.c`:

To compile the C code, one needs to write the following lines:
```
gcc -lm -o Conversion Conversion.c
```
This creates an executable called `Conversion`. Note, the option `-lm` is needed to link the `math.h` library through the gcc compiler. To execute the executable, enter the following lines:

```
./Conversion
```



`Sum.c`:

To compile the C code, one needs to write the following lines:
```
gcc -o Sum Sum.c
```
This creates an executable called `Sum`. To execute the executable, enter the following lines:

```
./Sum
```


