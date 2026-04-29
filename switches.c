#include <stdio.h>

int main (){

    int dayOnWeek = 0;

    printf("Enter a day of the week (1-7)\n");
    scanf("%d", &dayOnWeek);

    switch (dayOnWeek) {
    case 1:
        printf("Its monday");
        break;
    case 2:
        printf("Its Tuesday");
        break;
    case 3:
        printf("Its Wednesday");
        break;
    case 4:
        printf("Its Thursday");
        break;
    case 5:
        printf("Its Friday");
        break;
    case 6:
        printf("Its Saturday");
        break;
    case 7:
        printf("Its Sunday");
        break;
    default:
        printf("Please enter a number (1-7)");
        break;
    }
    return 0;
}