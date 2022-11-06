#include <stdio.h>
#include <math.h>



 int gcd(int a, int b);

int main(void){
    int a,b;

    printf("Enter 2 non-zero integers: ");
    scanf("%d %d", &a, &b);



    printf("%d\n", gcd(a,b));


    return 0;
}


int gcd(int a, int b){
    int tmp;
    // account for negative integers
    a = abs(a); b = abs(b);
    
    while(b != 0){
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}