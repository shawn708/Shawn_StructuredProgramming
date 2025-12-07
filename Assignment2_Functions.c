#include <stdio.h>

#define PIN 1234  

int login();
int menu();
int checkBalance(int balance);
int deposit(int balance);
int withdraw(int balance);

int main() {
    int balance = 0;
    int choice;

    if (!login()) {
        printf("Access denied. Exiting...\n");
        return 0;
    }

    do {
        menu();
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            checkBalance(balance);
        } 
        else if (choice == 2) {
            balance = deposit(balance);
        } 
        else if (choice == 3) {
            balance = withdraw(balance);
        }
        else if (choice != 4) {
            printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}


// Function Definitions

int login() {
    int pin, attempts = 0;

    while (attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == PIN) {
            printf("Login successful!\n");
            return 1;
        }

        attempts++;
        printf("Wrong PIN. Attempts left: %d\n", 3 - attempts);
    }

    return 0;
}

int menu() {
    printf("\n--- MENU ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
}

int checkBalance(int balance) {
    printf("Your Balance: %d\n", balance);
}

int deposit(int balance) {
    int amount;
    printf("Enter deposit amount: ");
    scanf("%d", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Deposit successful!\n");
    } else {
        printf("Invalid amount!\n");
    }

    return balance;
}

int withdraw(int balance) {
    int amount;
    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Invalid amount!\n");
    } 
    else if (amount > balance) {
        printf("Not enough balance!\n");
    } 
    else {
        balance -= amount;
        printf("Withdrawal successful!\n");
    }

    return balance;
}
