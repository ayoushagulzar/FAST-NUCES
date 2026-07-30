// Create a program that reads a string of characters and discards any numeric characters
// using a negated scanset function. 

#include <stdio.h>

int main() {
    char string[100], ch;

    printf("Enter a string: ");

    while (1) {
        // Read and print all characters that are NOT digits
        if (scanf("%[^0-9]", string) == 1)
            printf("%s", string);

        // Read the next single character
        if (scanf("%c", &ch) != 1)
            break;

        // If Enter is pressed, stop the loop
        if (ch == '\n')
            break;

        // If it's a digit, just skip it and continue reading
        if (ch >= '0' && ch <= '9')
            continue;
    }

    printf("\n");
    return 0;
}

