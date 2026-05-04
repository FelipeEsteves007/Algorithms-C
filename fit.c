#include <stdio.h>

typedef enum {
    BEGGINER, INTERMEDIATE, ADVANCED
}Score;

int main (){

    Score user = BEGGINER;

    switch (user){
    case BEGGINER:
        printf("20-minute workout");
        break;
    case INTERMEDIATE:
        printf("40-minute workout");
        break;
    case ADVANCED:
        printf("60-minute workout");
        break;
    }  
    return 0;
}