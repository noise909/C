#include<stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("enter the operator : ");
    scanf("%c",&operator);

    printf("enter num1 and num2 : ");
    scanf("%lf",&num1);
    scanf("%lf",&num2);


    switch(operator){
        
        case '+':
        result = num1 + num2;
        printf("\n result is : %.2lf",result);
        break;
        case '-':
        result = num1 - num2;
        printf("\n result is : %.2lf",result);
        break;
        case '*':
        result = num1 * num2;
        printf("\n result is : %.2lf",result);
        break;
        case '/':
        result = num1 / num2;
        printf("\n result is : %.2lf",result);
        break;


    }
    return 0;
}