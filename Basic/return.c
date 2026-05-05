#include <stdio.h>
#include <stdbool.h>

int square(int x){
    return x * x;
}

double cube(int y){
    return y * y * y;
}

bool ageCheck(int age){
    if (age >= 18){
        return true;
    } else {
        return false;
    }
}

int max(int x, int y){
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main (){

    int result1  = square(4);
    int result2  = square(5);
    double result3 = cube(3);
    bool age = 18;
    int x = 5;
    int y = 4;

    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%.2f\n", result3);
   
    if (ageCheck(age)) {
        printf("You may sign up");
    } else {
        printf("You must be 18+ to sign up");
    }

    int resultMax = max(x,y);
    printf("\n%d", resultMax);

    return 0;
}