//SIMPLE ATM SIMULATION PROGRAM 
#include <stdio.h>

// Function declarations
void check_balance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main() {
    int choice;
    float balance = 1000.0;  // Initial balance
    int continueTransaction = 1;

    while (continueTransaction) {
        // Display ATM Menu
        printf("\n********** ATM SYSTEM **********\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("********************************\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                check_balance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Exiting... Thank you for using our ATM service.\n");
                continueTransaction = 0;
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to check balance
void check_balance(float balance) {
    printf("Your current balance is: $%.2f\n", balance);
}

// Function to deposit money
float deposit(float balance) {
    float depositAmount;
    printf("Enter amount to deposit: $");
    scanf("%f", &depositAmount);
    if (depositAmount > 0) {
        balance += depositAmount;
        printf("$%.2f deposited successfully.\n", depositAmount);
    } else {
        printf("Invalid amount! Please try again.\n");
    }
    return balance;
}

// Function to withdraw money
float withdraw(float balance) {
    float withdrawAmount;
    printf("Enter amount to withdraw: $");
    scanf("%f", &withdrawAmount);
    if (withdrawAmount > 0 && withdrawAmount <= balance) {
        balance -= withdrawAmount;
        printf("$%.2f withdrawn successfully.\n", withdrawAmount);
    } else if (withdrawAmount > balance) {
        printf("Insufficient funds! Your current balance is $%.2f.\n", balance);
    } else {
        printf("Invalid amount! Please try again.\n");
    }
    return balance;
}
