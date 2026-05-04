#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Studenty;

void printStudenty(Studenty studenty);

int main (){

    Studenty studenty1 = {"bob", 30, 2.5, true};
    Studenty studenty2 = {0};

    strcpy(studenty2.name, "Patrick");
    studenty2.age = 27;
    studenty2.gpa = 4.0;
    studenty2.isFullTime = true;

    printStudenty(studenty1);
    printStudenty(studenty2);

    return 0;
}

void printStudenty(Studenty studenty){
    printf("%s\n", studenty.name);
    printf("%d\n", studenty.age);
    printf("%.2f\n", studenty.gpa);
    printf("%s\n", studenty.isFullTime == true? "Yes": "No");
    printf("\n");
}