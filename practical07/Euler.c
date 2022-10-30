#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/*
Author: Maximilian Kuttner
Date: 30-10-2022

Comment on results:
For x=1 the absolute error decreases as the order `n` increases.
However, we observe that for higher values of x, given that 
the order of the Taylor series expansion stays the same, 
the absolue error increases. The upper bound of the remainder 
of the truncated Taylor series is an increasing function of |x|. 
Thus, the absolute error increases as |x| increases.

*/

void printarray(double *ar, int size);

int main(void){

    int n, i;
    double *ar, x;

    // Get user input for order of Taylor expansion
    printf("Choose order of Taylor expansion: ");
    scanf("%d", &n);

    // Get user input for x in the Taylor expansion / exp(x)
    printf("Choose x: ");
    scanf("%lf", &x);

    // allocate double array of size n
    ar = (double *) malloc(n * sizeof(double));
    
    // inital value f(1) - exp(1)
    ar[0] = 1 + x;

    // compute the approximations for all orders up to the users choice
    for (i = 1; i < n; i++){
        ar[i] = ar[i-1] + pow(x, i + 1) / tgamma(i + 2);
    }

    // print all approximations of exp(1) for all orders up to the users choice
    printf("f(n) for order 1 to %d:\n", n);
    printarray(ar, n);

    // assign the absolute errors to the elemnents of the array
    for (i = 0; i < n; i++){
        ar[i] = fabs(ar[i] - exp(x));
    }
    
    // print all absolute errors of exp(1) for all orders up to the users choice
    printf("abs(f(n) - e) for order 1 to %d:\n", n);
    printarray(ar, n);

    // free the allocated memory for the array
    free(ar);
    ar=NULL;
    

    return 0;
}

// print all elements of an array / size has to be supplied aswell
void printarray(double *ar, int size){
    int i;
    for (i = 0; i < size; i++){
        printf("%f ", ar[i]);
    }
    printf("\n");
}