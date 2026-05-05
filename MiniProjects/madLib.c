#include <stdio.h>
#include <string.h>

int main (){

    char ad1[30] = "";
    char ad2[30] = "";
    char ad3[30] = "";
    char noun[30] = "";
    char verb[30] = "";

    printf("Enter an adjective (description): ");
    fgets(ad1, sizeof(ad1), stdin);
    ad1[strlen(ad1) - 1] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(ad2, sizeof(ad2), stdin);
    ad2[strlen(ad2) - 1] = '\0';

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(ad3, sizeof(ad3), stdin);
    ad3[strlen(ad3) - 1] = '\0';

    printf("Today I went to a  %s zoo\n", ad1);
    printf("In an exhibit, I saw a %s\n", noun);
    printf("%s was %s and %s\n", noun,ad2,verb);
    printf("I was %s", ad3);

    return 0;
}