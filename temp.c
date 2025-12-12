#include <stdio.h>

int sum(int a,int b){
    return a+b;
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n,a,b;
    printf("Hello World!\n");
    printf("Enter Number:\n");
    scanf("%d",&n);
    printf("Factorial of %d is: %d\n",n,factorial(n));
    printf("Enter a and b:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Sum of a and b is: %d",sum(a,b));
    return 0;
}