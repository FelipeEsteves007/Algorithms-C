#include <stdio.h>
#include <math.h>

int main (){

    char choice = '\0';
    float celsius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    scanf("%c", &choice);

    if (choice == 'C' || choice == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Celsius temperature (%.2f) in Fahrenheit %.2f", celsius, fahrenheit);
    } else if (choice == 'F' || choice == 'f'){
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * (5.0/9.0);
        printf("Fahrenheit temperature (%.2f) in Celsius %.2f", fahrenheit, celsius);
    } else {
        printf("Choose an option!");
    }
    return 0;
}