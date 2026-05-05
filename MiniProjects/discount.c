#include <stdio.h>

typedef float Price;

void applyDiscount(Price *price);

int main (){

    Price price = 100.0;
    Price *pPrice = &price;

    applyDiscount(pPrice);

    printf("%.2f", price);

    return 0;
}

void applyDiscount(Price *price){
    *price = *price * 0.9;
}