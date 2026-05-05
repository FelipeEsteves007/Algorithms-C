#include <stdio.h>

typedef int Number;
typedef char String[3];

int main (){

    String name = "fe";

    Number x = 3;
    Number y = 4;
    Number z = x + y;

    printf("%d\n", z);
    printf("%s", name);

    return 0;
}