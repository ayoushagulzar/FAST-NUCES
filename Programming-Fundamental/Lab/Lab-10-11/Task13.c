// Write a program to delete all contents of a file named data.txt. After deleting, 
// confirm the file is empty by attempting to read it back. 

#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("Error: Could not open data.txt\n");
        return 1;
    }
    // Writing nothing clears the file
    fclose(fp);

    printf("Contents of data.txt have been deleted.\n");

    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("Error: Could not open data.txt for verification.\n");
        return 1;
    }
    int ch = fgetc(fp);

    if (ch == EOF)
    {
        printf("Verification: File is empty.\n");
    }
    else
    {
        printf("Verification: File is NOT empty.\n");
    }

    fclose(fp);
    return 0;
}
