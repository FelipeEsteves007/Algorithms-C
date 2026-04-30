#include <stdio.h>

//int result = 0; // GLOBAL ESCOPE

int add(int x, int y){
    int result = x + y;
    return result;
}

int subtract(int x, int y){
    int result = x - y;
    return result;
}

int main (){

    int x = 3; // LOCAL
    int y = 4;

    int result = subtract(x,y);
    printf("%d", result);

    return 0;
}