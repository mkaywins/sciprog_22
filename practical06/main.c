#include <stdio.h>
#define MAX 10


// new matrix 'type' struct
struct matrix {
  int nrows;
  int ncols;
  double data[MAX][MAX]; // declare the data as a matrix of size MAX x MAX
};

// matrix multiplication method
struct matrix matmult(struct matrix * A, struct matrix * B);

//print method for matrix
void printmat(struct matrix M);

int main(void){
  int n = 5, p = 3, q = 4, i,j;

  // declare 3 matrices
  struct matrix A, B, C;
  
  // initialise the dimensions for A and B
  A.nrows = n; A.ncols = p;
  B.nrows = p; B.ncols = q;

  // initialise A as i+j
  for (i=0; i<n; i++){
    for(j=0; j<p; j++){
      A.data[i][j]  = i + j;
    }
  }
  
  // initialise B as i-j
  for (i=0; i<p; i++){
    for(j=0; j<q; j++){
      B.data[i][j]  = i - j;
    }
  }
  

  // compute C as the matrix product of A,B
  C = matmult(&A, &B);

  // print all matrices
  printmat(A); printmat(B); printmat(C);

  

  return 0;
}
// a function to print matrix structs
void printmat(struct matrix M){
  
  int i,j;
  // iterate through rows and columns of the matrix M and print each element
  for(i=0; i<M.nrows; i++){
    for(j=0; j<M.ncols; j++){ 
      printf("%.2f \t",M.data[i][j]);
    }
    // create a new line when the row has ended
    printf("\n");
  }
  // create a new line when the matrix has ended
  printf("\n");
}
