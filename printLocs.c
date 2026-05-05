#include <stdio.h>
#include <stdlib.h>

int main (){

    int m = 0;
    printf("Enter a value: ");
    scanf("%d", &m);

    int *pM = malloc(m * sizeof(int));
    int *pC = calloc(m,sizeof(int));

    if (pM == NULL){
        printf("Memory allocation failed pM\n");
        return 1;
    }

    if (pC == NULL){
        printf("Memory allocation failed pC\n");
        return 1;
    }

    for (int i = 0; i < m; i++){
        printf("%d ", pM[i]);
    }

    printf("\n");

    for (int i = 0; i < m; i++) {
        printf("%d ", pC[i]);
    }
    
    free(pM);
    pM = NULL;
    free(pC);
    pC = NULL;
    return 0;
}