//1. Calculator using Switch
//Perform addition, subtraction, multiplication, and division of two numbers.
#include<stdio.h>
int main(){
    float num1,num2,result;
    int choice;
    printf("enter two numbers\n");
    scanf("%f %f",&num1,&num2);
    printf("select operations:\n");
    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result=num1+num2;
        printf("result is %.2f", result);
        break;
    case 2:
    result=num1-num2;
    printf("result is %.2f", result);
    break;
    case 3:
    result=num1*num2;
    printf("result is %.2f", result);
    break;
    case 4:
    if(num2 !=0){
        result=num1/num2;
        printf("result is %.2f", result);
    }    
    else{
        printf("error: divisible by 0 is not defined\n");
    }
    break;
    default:
    printf("invalid choice please select given option\n");
        break;
    }
    return 0;
}
