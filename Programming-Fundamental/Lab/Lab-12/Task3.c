// Write a program to dynamically allocate memory for an array of n strings, where each 
// string can have a different length. Populate the strings with user input, sort them 
// alphabetically, and display the sorted strings. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar();

    // Dynamically allocate array of string pointers
    char **strings = (char **)malloc(n * sizeof(char *));
    if (strings == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        char tempInput[1000]; // temporary variable for input
        printf("Enter string %d: ", i + 1);
        fgets(tempInput, sizeof(tempInput), stdin);
        tempInput[strcspn(tempInput, "\n")] = '\0';

        // Allocate exact memory for the string (+1 for '\0' since strlen give length without null teminator)
        strings[i] = (char *)malloc((strlen(tempInput) + 1) * sizeof(char));
        if (strings[i] == NULL)
        {
            printf("Memory allocation failed!\n");
            for (int j = 0; j < i; j++)
                free(strings[j]);
            free(strings);
            return 1;
        }

        strcpy(strings[i], tempInput); // copy input to allocated memory
    }

    // Sorting strings alphabetically using bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(strings[j], strings[j + 1]) > 0)
            {
                char *temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }

    printf("\nSorted strings:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", strings[i]);
    }

    for (int i = 0; i < n; i++)
    {
        free(strings[i]);
    }
    free(strings);
    strings = NULL;

    return 0;
}
