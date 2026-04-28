#include <stdio.h>
#include <string.h>

int main (){

    char food[50] = "";
    float price = 0.00;
    int amount = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?\n");
    fgets(food, sizeof(food), stdin);
    food[strlen(food) - 1] = '\0';

    printf("What is the price for each?:\n");
    scanf("%f", &price);

    printf("How many would you like?:\n");
    scanf("%d", &amount);

    total = price * amount;

    printf("You have bought %d %s(s)\n", amount, food);
    printf("Total :%c%.2f",currency,total);

    return 0;
}