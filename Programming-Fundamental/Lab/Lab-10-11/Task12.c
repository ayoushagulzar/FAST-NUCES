// Write a program to open a text file and count the total number of characters, words, 
// and lines in it. Display these counts to the user. 

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100], ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    // fgetc() is used to read one character at a time from a file.
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    if (characters > 0 && ch == EOF)
        lines++;

    printf("\nFile Statistics:\n");
    printf("Total Characters: %d\n", characters);
    printf("Total Words     : %d\n", words);
    printf("Total Lines     : %d\n", lines);

    return 0;
}
