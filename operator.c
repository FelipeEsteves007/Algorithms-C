#include <stdio.h>
#include <stdbool.h>

int main (){

    /*int temp = 10;

    if (temp <= 0 && temp <= 30){
        printf("Its bad");
    } else if (temp == 20 || temp == 21){
        printf("Its perfetc");
    } else {
        printf("Its good");
    }*/

    bool isSunny = true;
    
    if (!isSunny){
        printf("Its cloudy outside");
    } else {
        printf("Its sunny outside");
    }

    return 0;
}