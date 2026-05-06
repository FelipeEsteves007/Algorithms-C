#include <stdio.h>
#include <stdlib.h>

int main (){

    int capacity = 1;
    int count = 0;
    float curentyGrade = 0.0f; 

    float *grades = malloc(capacity * sizeof(float));

    if (grades == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    while (1) {
        if (count == capacity){
            printf("Array full! Doubling size...");
            capacity = capacity * 2;

            float *temp = realloc(grades, capacity * sizeof(float));

            if (temp == NULL){
                printf("Memory allocation failed\n");
                free(grades);
                return 1;
            }
            grades = temp;
        }

        printf("\nEnter a grade: \n");
        scanf("%f", &curentyGrade);

        if (curentyGrade == -1){
            break;
        }       
        grades[count] = curentyGrade;
        count++;
    }
    
    for (int i = 0; i < count; i++){
        printf("%.2f ", grades[i]);
    }

    free(grades);
    grades = NULL;

    return 0;
}