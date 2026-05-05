#include <stdio.h>
#include <stdlib.h>

int main (){

    // calloc = contiguous allocation, allocates memory dynamically and all alocated bytes to 0
    // malloc() is faster, but calloc() leads to less bugs

    int number = 0;
    printf("Enter a number of players: ");
    scanf("%d", &number);

    int *scores = calloc(number, sizeof(int));

    if (scores == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("Enter a score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < number; i++) {
        printf("%d ", scores[i]);
    }
    
    free(scores);
    scores = NULL;

    return 0;
}