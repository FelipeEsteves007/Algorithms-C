#include <stdio.h>
#include <string.h>

void happy(char name[], int age){
    printf("Happy birtdhay!\n");
    printf("Happy birtdhay! %s \n", name);
    printf("Happy birtdhay! %d \n", age);
}

int main(){

    char name[50] = "";
    int age = 0;
    printf("Enter your name\n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1] = '\0';

    printf("Enter your age\n");
    scanf("%d", &age);

    happy(name,age);
    happy("lari",24);

    return 0;
}