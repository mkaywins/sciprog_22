#include <stdio.h>
#include <stdlib.h>


/*
Author: Maximilian Kuttner
Date: 30-10-2022
*/

int *allocatearray(int n);
void fillwithones(int *ar, int size);
void printarray(int *ar, int size);
void deallocatearray(int **par);

int main(void){

    // declare n - size of the array 
    // declare ar array pointer
    // declare par a pointer to a pointer for the freeup function
    int n = 10, *ar;

    // allocate sufficient memory for the array
    ar = allocatearray(n);

    // fill the array with ones
    fillwithones(ar, n);

    // print the array
    printarray(ar, n);

    // free up the memory
    deallocatearray(&ar);

    // prints if the memory is freed
    if(ar ==NULL){
        printf("Memory freed!\n");
    }
    
    return 0;
}

// deallocates the memory reserved for a particular array
void deallocatearray(int **par){
    // frees up the memory of the pointer (array) which par is pointing to
    free(*par);
    *par = NULL;
}

// print all elements of an array / size has to be supplied aswell
void printarray(int *ar, int size){
    int i;
    for (i = 0; i < size; i++){
        printf("%d ", ar[i]);
    }
    printf("\n");
}

// fills int array  with ones / size of the array has to be supplied
void fillwithones(int *ar, int size){
    int i;
    
    // fill all entries of the array to 1
    for (i = 0; i < size; i++){
        ar[i] = 1;
    }
}

// allocate memory for a double array
int *allocatearray(int n){

    // declare pointer to double
    int *ap;
    // allocate n times the size of one double and return cast the void 
    // pointer to a double pointer
    ap = (int *) malloc(n * sizeof(int));

    // return the pointer 
    return ap;
}




