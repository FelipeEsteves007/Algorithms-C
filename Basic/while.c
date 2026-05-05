#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main (){


    bool isRunning = true;
    char response = '\0';

    do{
        printf("You are playimg a game\n");
        printf("Would you like to continue? (Y = yes or N = no): \n");
        scanf(" %c", &response);

        if (toupper(response) != 'Y'){
            isRunning = false;
        } 
    } while (isRunning); 

    printf("You exit the game");

    /*char name[50] = "";

    printf("Enter you name: ");
    fgets(name,sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    while (strlen(name) == 0)
    {
        printf("Name cannot to be empty");
        fgets(name,sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s ", name);
    

  // int number = 0;

   while (number <= 0){
    printf("Enter a number greater than 0:");
    scanf("%d", &number);
   } */ 

   /*do {
    printf("Enter a number greater than 0:");
    scanf("%d", &number);
   } while (number <= 0); */
   
    return 0;
}