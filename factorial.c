//2. Factorial of a Number
//Find the factorial of a number using a loop.
#include<stdio.h>
int main(){
    int factorial =1;
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } 
    else {
    for(int i = 1; i < n+1; i++)
    {
        factorial=factorial*i;
    }
    printf("factorial of %d is %d",n,factorial);
}
    return 0;
}
