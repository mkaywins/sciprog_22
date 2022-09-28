#include <math.h>
#include <stdio.h>


int main(void){
  

  /* Initialise  a and N */
  int a = 0, N = 12;
  
  /* Initialise b - M_PI comes with math.h */
  float b = M_PI / 3;
  float first_part, x;
  float sum = 0.0;

  /* Compute the sum of tan() for the first and last element of x_0,..., x_N */
  first_part = tan(a) + tan(b);

  /* Generate a loop that creates 11 equidistant points between 0 and pi/3 */
  int i;
  for(i=1; i<N; i++){
    
    /* Generate the input */
    x = b * (i / 12.0);
    
    /* Add 2 * tan(x) to the sum */
    sum += 2.0 * tan(x);
    
}
  /* Add the sum to the first part (the sum of the end-points) */
  sum += first_part;
  
  /* Multiply the final sum by (b-a)/2N */
  sum *= ( (b - a)/(2 * N) );
  
  /* Print the area under the curve */
  printf("The area under the curve is: %f\n", sum);
  
  /* Print the absolute error against log(2), which is the analytical solution */ 
  printf("The absolute difference is: %f \n", fabs(sum - log(2)));

  return 0;
}
