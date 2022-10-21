#define MAX 10

// new matrix 'type' struct
struct matrix {
  int nrows;
  int ncols;
  double data[MAX][MAX]; // declare the data as a matrix of size MAX x MAX
};

struct matrix matmult(struct matrix * A, struct matrix * B){
  int i,j,k;

  // declare a new matrix C that will be returned
  struct matrix C;
  // initialise the dimensions of C
  C.nrows = (*A).nrows; C.ncols = (*B).ncols;
  // initialise matrix C to be 0
  C.data[0][0] = 0;
  
  // Now, compute C as the matrix product AxB
  for(i=0; i<C.nrows; i++){
    for(j=0; j<C.ncols; j++){
      for(k=0; k<(*A).ncols;k++){
	// just add to initialised valus of C (which are 0)
	C.data[i][j] += (*A).data[i][k] * (*B).data[k][j];
      }
    }
  }


  return C;
}
