#include <stdio.h>
#include <stdbool.h>

int main (){

    float price = 10.00;
    bool isStudent = true;
    bool isSenior = false;

    if (isStudent){
        if (isSenior){
        price  = price * 0.7;
        printf("You get a senior and student discount of 30%: %.2f", price);
        } else {
            price  = price * 0.9;
            printf("You get a student discount of 10%: %.2f", price);    
        }
    } else if (isSenior){
        price  = price * 0.8;
        printf("You get a senior discount of 20%: %.2f", price);
    } else {
       printf("You price is: %.2f", price); 
    }
    return 0;
}