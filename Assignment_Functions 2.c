#include <stdio.h>

#define PIN 1234

int login();   


int main() {
    int balance = 0;
    int choice, amount;

    if (!login()) {
        printf("Wrong attempts. Exiting.\n");
        return 0;
    }

    while (1) {
        printf("\n=== ATM MENU ===\n");
        printf("1. Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Select option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Balance: %d\n", balance);
        }

        else if (choice == 2) {
            printf("Enter deposit amount: ");
            scanf("%d", &amount);

            if (amount > 0) {
                balance += amount;
                printf("Successful Deposit.\n");
            } else {
                printf("Invalid amount!\n");
            }
        }

        else if (choice == 3) {
            printf("Enter withdrawal amount: ");
            scanf("%d", &amount);

            if (amount <= 0) {
                printf("Invalid amount!\n");
            }
            else if (amount > balance) {
                printf("Insufficient funds.\n");
            }
            else {
                balance -= amount;
                printf("Succesful Withdrawal.\n");
            }
        }

        else if (choice == 4) {
            printf("Thank you.\n");
            break;
        }

        else {
            printf("Invalid option.\n");
        }
    }

    return 0;
}


// Login function

int login() {
    int entered, tries = 0;

    while (tries < 3) {
        printf("Enter PIN: ");
        scanf("%d", &entered);

        if (entered == PIN) {
            printf("Login OK.\n");
            return 1;
        }

        tries++;
        printf("Wrong PIN. Attempts left: %d\n", 3 - tries);
    }

    return 0;
}