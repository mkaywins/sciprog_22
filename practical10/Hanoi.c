#include <stdio.h>
#include "make_a_move.h"

int main(void){

    int n;

    // user input for number of disks
    printf("Enter the number of disks (n): ");
    scanf("%d", &n);

    // call the method to solve the problem
    make_a_move(n, 'A', 'B', 'C');

    return 0;
}