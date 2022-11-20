#include <stdlib.h>
#include <stdio.h>
#include "magic_square.h"

// Note: The algorithm 'isMagicSquare' takes at best 1 flop and in the worst case approx. 2n^2 + 2n i.e. O(n^2).
int main(void){

    FILE *f1;
    int n, i, j, tmp;
    int** mat;
    char textfile[100];

    // get the path/ textfile to read the matrix from
    printf("Which textfile to use?: \n");
    scanf("%s", textfile);

    // open file connection
    f1 = fopen(textfile, "r");

    if (f1 == NULL){
        printf("!! can't open file\n");
        exit(1);
    }

    // read first line which gives us n
    fscanf(f1, "%d\n", &n);

    // create an array of size n with n pointers which temselves will point to integers
    mat = malloc(n * sizeof(int*));

    for(i = 0; i < n; i++){
        // allocate enough memory for each row
        mat[i] = malloc(n * sizeof(int));

        for(j = 0; j < n; j++){
            // clear the buffer and go to next line
            fflush(f1);
            // assign mat[i][j] to the integer that was read-in
            fscanf(f1, "%d\n", &mat[i][j]);
        }
    }

    // print 0 if matrix is non-magic o.w. 1
    printf("%d \n", isMagicSquare(mat,  n));

    // free up memory
    free(mat);
    mat = NULL;

    // close connection
    fclose(f1);

    return 0;
}