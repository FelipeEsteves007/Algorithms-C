#include <stdio.h>
#include <stdlib.h>

int main (){
    int candidate = 0;
    int voter = 0;
    int voters = 0;

    printf("How many candidates will participate?: ");
    scanf("%d", &candidate);

    int *candidates = calloc(candidate, sizeof(int));

    if (candidates == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("How many people will be vote?: ");
    scanf("%d", &voter);

    for (int i = 0; i < voter; i++) {
        printf("Choose a candidate,  to %d \n", candidate - 1, candidate);
        scanf("%d", &voters);

        if (voters >= 0 && voters < candidate){
            printf("Vote registered successfully!\n");
            candidates[voters]++;
        } else {
            printf("Invalid candidate! Your vote was wasted.\n");
        }
    }

    for (int i = 0; i < candidate; i++) {
        printf("Candidate %d: %d vote(s)\n", i, candidates[i]);
    }
    
    free(candidates);
    candidates = NULL;
}