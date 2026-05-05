#include <stdio.h>

int main (){

    //int number = 5;
    //("%d is %s", number, (number % 2 == 0)? "Even": "Odd");

    int age = 19;
    printf("%d, %s", age, (age > 18) ? "You are an adult" : "You are a child");

    return 0;
}