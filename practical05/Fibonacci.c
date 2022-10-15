#include <stdio.h>

// function to increment two lagging integers for the fibonacci sequence
void next_fibo(int *pa, int *pb);

int main(void){
  
  // the largest index until which the sequence should be returned
  int N;

  // ask for user input for N
  printf("Enter N for the Fibonacci: ");
  scanf("%d", &N);
  
  // create array of size N+1 to store fibonacci sequence
  int ar[N+1];
  int i, a=1, b=0;

  ar[0] = b;
  ar[1] = a;

  for(i=2; i<N+1; i++){

    // compute F_n-1 + F_n-2
    ar[i] = a + b;
    // increment F_n-1, F_n-2 to F_n, F_n-1
    next_fibo(&a, &b);
  }
  
  for(i=0; i<N+1; i++){
    printf("%d ", ar[i]);
  }
  
  printf("\n");

  return 0;
}

void next_fibo(int *pa, int *pb){
  // store F_n-2 temporarly
  int tmp = *pb; 
  // F_n-1 = F_n-1
  *pb = *pa;
  // F_n = F_n-1 + F_n-1
  *pa = *pa + tmp; 
}
