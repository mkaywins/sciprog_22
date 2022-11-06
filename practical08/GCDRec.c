#include <stdio.h>
#include <math.h>



 int gcd(int a, int b);

int main(void){
    int a,b;

    printf("Enter 2 non-zero integers: ");
    scanf("%d %d", &a, &b);


    // account for negative integers
    a = abs(a); b = abs(b);
    printf("%d\n", gcd(a,b));

    return 0;
}


int gcd(int a, int b){

    // check whether the remainder from the last call is 0
    if(b == 0){
        // then return a - i.e. the divisor
        return a;
    }else{
        // recursive function call for a, b = b, a mod b
        return gcd(b, a % b);
    }
}