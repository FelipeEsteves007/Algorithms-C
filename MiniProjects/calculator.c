#include <stdio.h>
#include <math.h>

int main (){

    float num1 = 0.0f;
    float num2 = 0.0f;
    char operator = '\0';
    float total = 0.0f;

    printf("Enter the first number:\n");
    scanf("%f", &num1);

    printf("Enter the operator (+ - * /):\n");
    scanf("%s", &operator);
    
    printf("Enter the second number:\n");
    scanf("%f", &num2);

    switch (operator){
    case '+':
        total = num1 + num2;
        printf("%.2f + %.2f = %.2f ",num1 ,num2 ,total);
        break;
    case '-':
        total = num1 - num2;
        printf("%.2f - %.2f = %.2f ",num1 ,num2 ,total);
        break;
    case '*':
        total = num1 * num2;
        printf("%.2f - %.2f = %.2f ",num1 ,num2 ,total);
        break;
    case '/':
        if (num2 == 0){
            printf("The number 2 cannot be zero");
        } else {
            total = num1 / num2;
            printf("%.2f / %.2f = %.2f ",num1 ,num2 ,total);
        }
        break;
    default:
        printf("Enter a valid operator!");
        break;
    }
    return 0;
}