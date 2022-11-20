# Practical 09

The repository contains 4 files:

* `main.c`: A C-program that checks whether a matrix, which is read-in trhough a text file, is a 'magic square matrix'. A matrix is considered to be magic square if all rows, column and main diagonals sum up to $(n \times (n^2 + 1))/2$. First, the user is asked to provide a text file from which the data for the matrix can  be read into the C-program. Second, a connection to the text file is established. Thrid, memory for the integer matrix is allocated and subsequently the matrix is checked trhough an auxillary function `isMagicSquare()`. Ultimately, the result is printed (1=magic / 0=not magic). The memory for the matrix used is freed and the connection to the file is closed before the program terminates.

* `magic_square.h`: A C-header file which contains the function definition of `isMagicSquare()`.
* `magic_mat.txt`: A text file containing data corresponding to an example of a magic square matrix.
* `notmagic_mat.txt`: A text file containing data corresponding to an example of a matrix which is not a magic square.


## How to compile and run the program?

`main.c`: 

To compile the C code, one needs to write the following lines:
```
gcc main.c -o main.exe 
```
This creates an executable called `main.exe`. To execute the executable, enter the following lines:

```
./main.exe
```