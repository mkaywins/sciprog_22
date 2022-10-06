#include <stdio.h>
#include <math.h>

// Declare global variable
float ar[13];

// Prototype of function 'degtorad' and 'aucurve'
float degtorad(float arg);
float aucurve(int N);

// Main unit
int main(void){
  
  int i;
  float rad;

  for(i=0; i<13; i++){
    // Generate 13 equiditant degrees between 0 and 60 - Convert degrees to radians
    rad =  degtorad(i * (60 / 12) );
    // Assign r-value of array 'ar' at position 'i' to tan(x)
    ar[i] = tanf(rad);
  }
  
  // Print the array
  for(i=1; i<13; i++){
    if(i != 12){
      printf("%f ", ar[i]);
    }else{
      printf("%f\n", ar[i]);
    }
  }
  
  // Compute and print the area under the curve of tan(x) by using aucurve()
  printf("The area under the curve: %f\n", aucurve(13));

  return 0;
}


// Definition of 'deftorad'
float degtorad(float arg) {
  return( (M_PI * arg) / 180.0 );
}

// Definition of 'aucurve'
float aucurve(int N){
  
  // Initialise a and N
  int a = 0;
  // Convert Number of points in the array to the maximum index in the array, i.e. subtract 1
  N = N - 1;

  // Initialise b, the sum of the first part and the sum 
  float b = M_PI / 3, first_part, sum = 0.0;

  /* Compute the sum of tan() for the first and last element of x_0,..., x_N 
     We can access these elements through the global array 'ar'*/
  first_part = ar[0] + ar[N];

  int i;
  for(i=1; i<N; i++){
    // Add 2 * tan(x_i) to the sum 
    sum += 2.0 * ar[i];
  }

  // Add the sum to the first part (the sum of the end-points) 
  sum += first_part;
  
  // Multiply the final sum by (b-a) / 2N 
  sum *= ( (b - a) / (2 * N) );

  return(sum);
};
