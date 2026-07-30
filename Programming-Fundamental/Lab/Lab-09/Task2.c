// A bank manages 5 customer accounts. Write functions that accept the address of the balance
// array. Allow deposits and withdrawals by updating the balance directly through pointers.
// Find and display the average balance. 

#include<stdio.h>

void manageAccounts(float balanceArr[] , int size);

int main() {
    float balance[5];
    manageAccounts(balance , 5);
    return 0;
}

void manageAccounts(float balanceArr[] , int size) {
    int i;
    for (i = 0 ; i < size ; i++) {
        printf("Enter bank balance of Customer %d:\n", i + 1);
        scanf("%f", &balanceArr[i]);
    }

    int choice;
    float amount;

    for (i = 0 ; i < size ; i++) {
        printf("\nCustomer %d:\n", i + 1);
        printf("Press 1 for withdraw.\n");
        printf("Press 2 for deposit.\n");
        printf("Press any other number to skip.\n");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter the amount you want to withdraw: ");
            scanf("%f", &amount);
			if(amount > balanceArr[i]){
				printf("Insufficient Balance!\n");
			}
			else{
            *(balanceArr + i) -= amount;   // pointer update

            printf("Successful Withdrawal!\n");
            printf("Your New Balance is %.2f rupees\n", *(balanceArr + i));
        }
        }
        else if (choice == 2) {
            printf("Enter the amount you want to deposit: ");
            scanf("%f", &amount);

            *(balanceArr + i) += amount;   // pointer update

            printf("Successful Deposit!\n");
            printf("Your New Balance is %.2f rupees\n", *(balanceArr + i));
        }
        else {
            continue;
        }
    }

    float sum = 0;
    for (i = 0; i < size; i++) {
        sum += *(balanceArr + i);
    }

    printf("\nAverage Balance: %.2f\n", sum / size);
}

