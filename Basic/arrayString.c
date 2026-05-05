#include <stdio.h>
#include <string.h>

int main (){

    char names[3][25] = {0};
    int size = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < size; i++) {
        printf("Enter a name: ");
        fgets(names[i], sizeof(names), stdin);
        names[i][strlen(names[i]) - 1] = '\0';

        printf("Hello %s\n", names[i]);
    }

    //char fruit[][10] = {"Apple", "Banana", "Coconut"};
    //int size = sizeof(fruit) / sizeof(fruit[0]);

    //fruit[0][0] =  'e';

    // (int i = 0; i < size; i++){
    //    printf("%s ", &fruit[i]);
    //}
    
    return 0;
}