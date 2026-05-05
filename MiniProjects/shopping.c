#include <stdio.h>
#include <stdlib.h>

int main (){

    int item = 0;
    float total = 0.0;

    printf("How many items?: ");
    scanf("%d", &item);

    float *items = malloc(item * sizeof(float));

    if (items == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < item; i++) {
        printf("How much this item?.\n %d item: ", i + 1);
        scanf("%f", &items[i]);
    }

    for (int i = 0; i < item; i++) {
        total += items[i];
    }

    printf("Total: %.2f", total);
    
    free(items);
    items = NULL;

    return 0;
}