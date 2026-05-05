#include <stdio.h>
#include <math.h>

int main (){

    int choice = 0;
    float pounds = 0.0;
    float kilograms = 0.0;
    
    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");

    printf("Enter you choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter the weight in kilograms:");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds", kilograms, pounds);
    } else if (choice == 2) {
        printf("Enter the weight in pounds:");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms", pounds, kilograms);
    } else {
        printf("Choose a valid number!");
    }

    return 0;
}