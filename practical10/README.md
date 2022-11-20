# Practical 10

The repository contains 2 files:

* `Hanoi.c`: A C-program that solves the famous *Hanoi tower problem* [https://en.wikipedia.org/wiki/Tower_of_Hanoi]. The goal is to stack `n` disks (with different size) on a rod in correct order onto another rod. In total there are 3 rods, i.e. one rod can be used as an auxillary rod to transfer all disks. There are 3 rules that need to be followed: 
    1. Only one disk may be moved at a time.
    2. Each move consists of taking the upper disk from one of the rods and sliding it onto another rod, on top of the other disks that may already be present on that rod.
    3. No disk may be placed on top of a smaller disk.
    
    The program makes use of a recursive solution for the problem at hand. The program prints the moves one should make to end up with the solution. 

* `make_a_move.h`: A C-header file which contains the function definition of `make_a_move()` which is used in `Hanoi.c` to compute the solution.

## How to compile and run the program?

`Hanoi.c`: 

To compile the C code, one needs to write the following lines:
```
gcc Hanoi.c -o Hanoi.exe 
```
This creates an executable called `Hanoi.exe`. To execute the executable, enter the following lines:

```
./Hanoi.exe
```