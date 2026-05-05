#include <stdio.h>

int main (){

    FILE  *pFile = fopen("TestC.txt", "w");

    char text[] = "BOOTY BOOTY\n ROCKIN EVERYWHERE!";

    if (pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);  
    printf("File  was writter sucessfully!\n");

    fclose(pFile);

    return 0;
}