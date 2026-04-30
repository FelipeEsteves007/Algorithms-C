#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // prototype
bool ageChech (int age);

int main (){

    hello("bro",23);

    if (ageChech(17)){
        printf("ok");
    } else {
        printf("not ok");
    }

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d\n ", age);
}

bool ageChech (int age){
    return age >= 16;
}