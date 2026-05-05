#include <stdio.h>
#include <stdlib.h>

int main (){

    int quantity = 0;

    printf("How many letters are in the acronym you want to create?: ");
    scanf("%d", &quantity);

    char *memory = malloc((quantity + 1) * sizeof(char));

    if (memory == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < quantity; i++) {
        printf("Letter %d: \n", i + 1);
        scanf(" %c", &memory[i]);
    }

    memory[quantity] = '\0';

    printf("Your acronym is: %s", memory);
    
    free(memory);
    memory = NULL;

    return 0;
}