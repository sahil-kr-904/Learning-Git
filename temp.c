#include <stdio.h>

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    printf("Hello World!\n");
    printf("Enter Number:\n");
    scanf("%d",&n);
    printf("Factorial of %d is: ",factorial(n));
    return 0;
}