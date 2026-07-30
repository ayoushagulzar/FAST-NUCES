/*
  Question 01: Book Inventory Management System
 
  Description:
  Develop a menu-driven bookstore inventory system using parallel arrays to
  store book information. The program should:
  - Add new books while preventing duplicate ISBNs.
  - Process book sales and update stock quantities.
  - Generate a report of books with quantity below 5.
  - Implement each menu operation using separate functions.
 */

#include <stdio.h>

int addBook(long long int isbns[100], char titles[100][50], float prices[100], int quantities[100], int count)
{
    if (count >= 100)
    {
        printf("Cannot add more books, storage full!\n");
        return count;
    }
    printf("Enter the 13 digit isbn number (without hyphen): ");
    scanf("%lld", &isbns[count]);
    for (int i = 0; i < count; i++)
    {
        if (isbns[i] == isbns[count])
        {
            printf("Duplicate ISBN, can not add book.");
            return count;
        }
    }
    printf("Enter the title of the book: ");
    scanf(" %[^\n]", titles[count]);
    printf("Enter the price of the book: ");
    scanf("%f", &prices[count]);
    printf("Enter the quantity: ");
    scanf("%d", &quantities[count]);
    printf("Book added successfully!\n");

    return count + 1;
}
int processForSale(int count, long long int isbns[100], int quantities[100])
{
    long long int searchISBN;
    int soldCopies;
    int found = 0;

    printf("Enter the 13 digit isbn number (without hyphen) to search the book: ");
    scanf("%lld", &searchISBN);
    printf("Enter the number of copies that are sold: ");
    scanf("%d", &soldCopies);

    for (int i = 0; i < count; i++)
    {
        if (isbns[i] == searchISBN)
        {
            found = 1;
            if (soldCopies <= quantities[i])
            {
                quantities[i] -= soldCopies;
                printf("Sale proceeds successfully!\n");
                printf("Remaining books are: %d\n", quantities[i]);
            }
            else
            {
                printf("Not enough stock!\n");
            }
            break;
        }
    }

    if (!found)
    {
        printf("Book not found!\n");
        return 1;
    }

    return 0;
}

void lowStockReport(int quantities[], long long int isbns[], char titles[][50], int count)
{
    for (int i = 0; i < count; i++)
    {
        if (quantities[i] < 5)
        {
            printf("Book %s of isbn number %lld is low in Stock!\n", titles[i], isbns[i]);
        }
    }
}
int main()
{
    long long int isbns[100];
    char titles[100][50];
    float prices[100];
    int quantities[100];
    int count = 0;
    int choice = 0;
    char userchoice;
    do
    {
        printf("\n=== Bookstore Menu ===\n");
        printf("1. Add a New Book\n");
        printf("2. Process a Sale\n");
        printf("3. View Stock Report\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            count = addBook(isbns, titles, prices, quantities, count);
            break;
        case 2:
            processForSale(count, isbns, quantities);
            break;
        case 3:
            lowStockReport(quantities, isbns, titles, count);
            break;
        default:
            printf("Invalid choice!");
        }
        printf("Do you want to continue(y/n)?");
        scanf(" %c", &userchoice);
    } while (userchoice == 'Y' || userchoice == 'y');

    return 0;
}