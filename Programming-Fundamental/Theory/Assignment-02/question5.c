/*
  Question 05: Message Encoding & Decoding Utility
 
  Description:
  Develop a text encoding and decoding utility that:
  - Reverses the input message.
  - Toggles the 2nd and 5th bits of each character's ASCII value.
  - Allows the encoded message to be decoded back to its original form.
 */

#include <stdio.h>
#include <string.h>

void encodeMessage(char message[50])
{
    printf("Enter message: ");
    fgets(message, 50, stdin);
    message[strcspn(message, "\n")] = '\0';

    int length = 0;
    while (message[length] != '\0')
    {
        length++;
    }

    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        char temp = message[i];
        message[i] = message[j];
        message[j] = temp;
    }
    
    // (Bit positions start at 0 from the right)
    for (int i = 0; i < length; i++)
    {
        unsigned char ch = message[i]; 

        ch = ch ^ (1 << 1); // toggle 2nd bit
        ch = ch ^ (1 << 4); // toggle 5th bit
        message[i] = ch;
    }
    printf("\nEncoded message: %s\n", message);

    printf("Binary encoding:\n");
    for (int i = 0; i < length; i++)
    {
        unsigned char ch = message[i];

        for (int bit = 7; bit >= 0; bit--)
        {
            if (ch & (1 << bit))
                printf("1");
            else
                printf("0");
        }
        printf(" ");
    }
    printf("\n");
}

void decodeMessage(char message[])
{
    printf("Enter encoded message: ");
    fgets(message, 50, stdin);
    message[strcspn(message, "\n")] = '\0';

    int length = 0;
    while (message[length] != '\0')
    {
        length++;
    }
    for (int i = 0; i < length; i++)
    {
        unsigned char ch = message[i];
        ch = ch ^ (1 << 1); // toggle 2nd bit
        ch = ch ^ (1 << 4); // toggle 5th bit
        message[i] = ch;
    }
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        char temp = message[i];
        message[i] = message[j];
        message[j] = temp;
    }
    printf("\nDecoded message: %s\n", message);
}

int main()
{
    int choice;
    char userChoice;
    char message[50];
    do
    {
        printf("\n=== Tranzum Courier Service Menu ===\n");
        printf("1. Encode Message\n");
        printf("2. Decode Message \n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        while (getchar() != '\n'); // clear input buffer

        switch (choice)
        {
        case 1:
            encodeMessage(message);
            break;
        case 2:
            decodeMessage(message);
            break;
        case 3:
            printf("Exiting system...\n");
            return 0;
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &userChoice);

    } while (userChoice == 'y' || userChoice == 'Y');
    return 0;
}
