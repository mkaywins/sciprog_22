#include <stdio.h>
#include <math.h>



float artanh1(float x);
float artanh2(float x);

// create a global variable s.t. it does not have to be passed to artanh1,2
float d;

int main(void){
  float x, ar1[181], ar2[181], dev1=0, dev2=0;

  // ask the user for input for delta
  printf("Enter positive number (delta): ");
  scanf("%f", &d);  

  int i;
  for(i=0; i<181; i++){
    // create a sequence of x values in [-0.9,0.9]
    x = -0.9 + i * 0.01;

    // assign the result of each method to an element in the corresp. array
    ar1[i] = artanh1(x);
    ar2[i] = artanh2(x);    

    // compute the absolute difference to atanh() from math.h
    dev1 += fabs(ar1[i] - atanh(x));
    dev2 += fabs(ar2[i] - atanh(x));
  }

  // print and compare the sum of absolute errors for both methods
  printf("The first methods absolute error: %.10f \n", dev1); 
  printf("The second methods absolute error: %.10f\n", dev2);

  return 0;
}


float artanh1(float x){
  float sum = 0, s = x, n=0;
 
  // check whether the summand is smaller than delta - if not break the loop
  while(fabs(s)>=d){
    // add the summand to the sum
    sum += s;
    // increment the index and the summand
    n++;
    s = powf(x, (float) (2 * n + 1)) / (float) (2 * n + 1);
  }
  return sum;
}

float artanh2(float x){
  return 0.5 * ( logf(1.0 + x) - logf(1.0 - x) );
}
