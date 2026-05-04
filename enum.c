#include <stdio.h>

typedef enum {
    SUNDAY, MONDAY, TUESDAY, WERDNESDAY, THURSDAY, FRIDAY, SATURDAY
} Day;

int main (){

    Day today = SATURDAY;

    if (today == SUNDAY || today == SATURDAY){
        printf("It's weekend");
    } else {
        printf("It's weekday");
    }
    return 0;
}