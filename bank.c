#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withDraw(float balance);

int main (){

    float userBalance = 0.0f;
    float balance = 0.0f;
    int choice = 0;

 do {
    printf("\n  Select an option  \n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

        switch (choice) {
    case 1:
        checkBalance(userBalance);
        break;
    case 2: 
        float amount = deposit();
        if (amount > 0) {
            userBalance += amount;
            printf("Deposit successful! Current balance: %.2f\n", userBalance);
        }  else {
            printf("\nThe deposit could not be made\n");
        }
        break;
    case 3:
        userBalance = withDraw(userBalance);
        printf("Your balance now is: %.2f\n", userBalance);
        break;
    case 4:
        printf("\nExiting... Goodbye!\n");
        break;
    default:
        printf("\nInvalid option. Try again.\n");    
    }
 } while (choice != 4);

    return 0;
}

void checkBalance(float balance){
    printf("Your balance is %.2f\n", balance);
}

float deposit(){
    float deposit = 0.0f;
    printf("What amount do you want to deposit?: ");
    scanf("%f", &deposit);

    if (deposit < 0){
        printf("Invalid deposit!\n");
    } else {
        return deposit;
    }
}

float withDraw(float balance){
    float amountToTake = 0.0f;
    printf("How much would you like to withdraw?: ");
    scanf("%f", &amountToTake);

    if (amountToTake > balance){
        printf("Error: Insufficient funds!\n");
        return balance;
    } else if (amountToTake < 0) {
        printf("Error!\n");
        return balance;
    } else {
        float newBalance = balance - amountToTake;
        printf("Withdrawal successful!\n");
        return newBalance;
    }
}