// Write a program in C to merge two files and write them to another file.

#include <stdio.h>

int main()
{
    FILE *file1, *file2, *mergedFile;
    char filename1[100], filename2[100], ch;

    printf("Enter first file name: ");
    scanf("%s", filename1);

    printf("Enter second file name: ");
    scanf("%s", filename2);

    file1 = fopen(filename1, "r");
    if (file1 == NULL)
    {
        printf("Could not open %s\n", filename1);
        return 1;
    }

    file2 = fopen(filename2, "r");
    if (file2 == NULL)
    {
        printf("Could not open %s\n", filename2);
        fclose(file1);
        return 1;
    }
    // Open merged file in write mode
    mergedFile = fopen("merged.txt", "w");
    if (mergedFile == NULL)
    {
        printf("Could not create merged.txt\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Copy contents of first file to merged file
    while ((ch = fgetc(file1)) != EOF)
    {
        fputc(ch, mergedFile); // fputc() writes a single character to a file.
    }

    // Copy contents of second file to merged file
    while ((ch = fgetc(file2)) != EOF)
    {
        fputc(ch, mergedFile);
    }

    printf("Files merged successfully into merged.txt\n");

    fclose(file1);
    fclose(file2);
    fclose(mergedFile);

    return 0;
}
