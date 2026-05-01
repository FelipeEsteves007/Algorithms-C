#include <stdio.h>
#include <string.h>

int main (){

    int numbers[] = {10,20,30,40};
    char grade[] = {'a', 'b'};
    char name[] = "fe";

    printf("%d\n", numbers[0]);
    printf("%c\n", grade[0]);
    printf("%c\n", name[0]);

    for (int i = 0; i <= strlen(grade); i++){
        printf("%c", grade[i]);
    }

    int size = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < size; i++){
        printf(" %d ", numbers[i]);
    }

    return 0;
}