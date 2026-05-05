#include <stdio.h>
#include <stdbool.h>

int main(){

    int age = 23;
    int year = 2025;
    float gpa = 2.5;
    double pi = 3.1415651651;
    char grade = 'A';
    char name[] = "code";
    bool isOnline = false; 

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("gpa is %.1f\n", gpa);
    printf("The value of pi is %.10lf\n", pi);
    printf("Your grade is %c\n", grade);
    printf("Your name is %s\n", name);
    
    if (isOnline){
        printf("Online", isOnline);
    } else {
        printf("Offline", isOnline);
    }
    return 0;
}