#include <stdio.h>

void birthday(int* age);

int main (){
    // pointer = A variable that stores the memory address of another variable

    int age = 25;
    int *pAge = &age;

    birthday(pAge);

    printf("%p\n", &age);
    printf("%p\n", pAge);

    printf("You are %d years old", age);
    return 0;
}

void birthday(int* age){
    (*age)++;
}