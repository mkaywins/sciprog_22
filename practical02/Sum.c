#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
      /*  Insert here */
      /* 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1 */
     sum1 += 1.0 / i;

   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
      /* Insert the same line as above except use sum2 */
      /* 1/1000 + 1/999 + 1/998 + ... + 1 */
     sum2 += 1.0 / i;
   }

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
/* The difference is expected to be non-zero as round-off happens in 
   finite precision floating point systems - since addition is done from 
   left to right (or from right to left) the partial sums are approximated 
   through th floating point system differently */

   diff = sum1 - sum2; 


/*print the difference*/
   printf(" Difference between the two is %f\n",diff);

}
