#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int max = 100;
    int min = 1;
    int userNum = 0;
    int tries = 0;
    srand(time(NULL));
    int randomNum = (rand() % (max - min + 1)) + min;

    ("*** NUMBER GUESSING GAME ***\n");

    do {    
        printf("Guess a number betweem %d - %d: ", min,max);
        scanf("%d", &userNum);
        tries++;

        if (userNum > randomNum){
            printf("TOO HIGH\n");
        } else if (userNum < randomNum) {
            printf("TOO LOW\n");
        } else {
            printf("CORRECT\n");
        }       
    } while (userNum != randomNum);
    
    printf("The number is %d \n", randomNum);
    printf("It took you %d tries", tries);

    return 0;
}