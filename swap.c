#include <stdio.h>

void swap(int* x, int* y);

int main (){

    int a = 10;
    int b = 20;
    int *pA = &a;
    int *pB = &b;

    swap(pA,pB);

    printf("A: %d and B: %d", a, b);
    return 0;
}

void swap(int* x, int* y){
    int temp = *x; 
    *x = *y;       
    *y = temp;    
}