/*
  Question 02: Supermarket Inventory & Billing System
 
  Description:
  Develop a menu-driven supermarket management system that stores customer
  information, manages inventory, processes purchases, generates invoices,
  and applies a 25% discount when the valid promo code (Eid2025) is entered.
 */

#include <stdio.h>
#include <string.h>

int quantity[4] = {50, 10, 20, 8};
int pricePerProduct[4] = {100, 200, 300, 150};
int purchased[4] = {0};
char name[100];
char CNIC_no[20];
float discount = 0.0;

void customerInformation()
{
    getchar(); // clear buffer
    printf("\nEnter the name of the customer: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter the CNIC number (with hyphens): ");
    fgets(CNIC_no, sizeof(CNIC_no), stdin);
    CNIC_no[strcspn(CNIC_no, "\n")] = '\0';
}
void displayInventory()
{
    printf("\nProduct Code\tQuantity\tPrice per Product\n");
    for (int i = 0; i < 4; i++)
    {
        printf("\n    00%d\t\t   %d\t\t      %d\n", i + 1, quantity[i], pricePerProduct[i]);
    }
}
void updateInventory_addItemtoCart()
{
    char choice;
    int selectcode, purchaseQuantity;
    do
    {
        printf("\nDo you want to purchase or add to cart anything? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter the product code (1-4): ");
            scanf("%d", &selectcode);

            if (selectcode >= 1 && selectcode <= 4)
            {
                printf("Enter the quantity: ");
                scanf("%d", &purchaseQuantity);

                if (purchaseQuantity <= quantity[selectcode - 1])
                {
                    quantity[selectcode - 1] -= purchaseQuantity;
                    purchased[selectcode - 1] += purchaseQuantity;
                    printf("Added to cart successfully!\n");
                }
                else
                {
                    printf("Out of stock!\n");
                }
            }
            else
            {
                printf("Invalid product code!\n");
            }
        }
        else if (choice == 'n' || choice == 'N')
        {
            break;
        }
        else
        {
            printf("Invalid input! Try again.\n");
        }
    } while (1);
}
void displayBill()
{
    char choice;
    char promocode[20];
    float total = 0.0;

    for (int i = 0; i < 4; i++)
    {
        if (purchased[i] > 0)
        {
            total += purchased[i] * pricePerProduct[i];
        }
    }

    printf("\nDo you have a voucher? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y')
    {
        printf("Enter your promocode: ");
        scanf("%s", promocode);

        char code[] = "Eid2025";
        int i;

        for (i = 0; code[i] != '\0' && promocode[i] != '\0'; i++)
        {
            if (code[i] != promocode[i])
                break;
        }

        if (code[i] == '\0' && promocode[i] == '\0')
        {
            discount = total * 0.25;
        }
    }

    printf("\nTotal bill (without discount): %.2f\n", total);
    if (discount > 0)
    {
        printf("Discount applied: %.2f\n", discount);
        printf("Total bill (with discount): %.2f\n", total - discount);
    }
}
void showInvoice()
{
    printf("\n\n\t\t===== Invoice =====\n\n");
    printf("Customer Name: %s\n", name);
    printf("Customer CNIC: %s\n", CNIC_no);
    printf("\nProduct Code\tQuantity\tPrice per Product\tSubtotal\n");

    float total = 0.0;
    for (int i = 0; i < 4; i++)
    {
        if (purchased[i] > 0)
        {
            int subTotal = purchased[i] * pricePerProduct[i];
            printf("\n    00%d\t\t   %d\t\t      %d\t\t %d\n", i + 1, purchased[i], pricePerProduct[i], subTotal);
            total += subTotal;
        }
    }
    printf("\nTotal Bill (without discount): %.2f\n", total);
    if (discount > 0)
    {
        printf("Discount applied: %.2f\n", discount);
        printf("Total Bill (with discount): %.2f\n", total - discount);
    }
}

int main()
{
    int choice = 0;
    char userchoice;

    do
    {
        printf("\n=== Store Management Menu ===\n");
        printf("1. Add Customer Information\n");
        printf("2. Display Inventory\n");
        printf("3. Update Inventory / Add Item to Cart\n");
        printf("4. Display Bill\n");
        printf("5. Show Invoice\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            customerInformation();
            break;
        case 2:
            displayInventory();
            break;
        case 3:
            updateInventory_addItemtoCart();
            break;
        case 4:
            displayBill();
            break;
        case 5:
            showInvoice();
            break;
        case 6:
            printf("Exiting system...\n");
            return 0;
        default:
            printf("Invalid choice!\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &userchoice);

    } while (userchoice == 'Y' || userchoice == 'y');

    return 0;
}
