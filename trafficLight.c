#include <stdio.h>

typedef enum {
    Red, Yellow, Green
}Sinal;

int main (){

    Sinal sinal = Red;

    printf("%s", sinal == Green? "Go!": "Wait" );
    return 0;
}