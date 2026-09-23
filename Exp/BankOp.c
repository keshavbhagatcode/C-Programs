//A menu driven program to perform basic banking operations like deposit, withdraw, check balance and exit
#include <stdio.h>
void main()
{
    int choice;
    float balance = 0.0, amount;
    do {
        printf("\nBanking Operations Menu:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount deposited successfully.\n");
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= balance) {
                    balance -= amount;
                    printf("Amount withdrawn successfully.\n");
                } else {
                    printf("Insufficient balance.\n");
                }
                break;
            case 3:
                printf("Current balance: %.2f\n", balance);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
}