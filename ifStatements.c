#include <stdio.h>
#include <stdbool.h>

int main (){

    bool isStudent = true;

    if (isStudent) {
        printf("You are a student");
    } else {
        printf("You are not a student");
    }


 /*  int age = 0;

    printf("What is your age?: ");
    scanf("%d", &age);

    if (age >= 65){
        printf("You are a senior");
    } else if (age >= 18){
        printf("You are an adult");
    } else if (age <= 18 && age > 0){
        printf("You are a child");
    } else if (age == 0){
        printf("You are a newborn");
    } else if (age < 0 ){
        printf("You are nothing");
    }
*/
    return 0;
}