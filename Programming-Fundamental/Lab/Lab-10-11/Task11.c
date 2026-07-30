
// Write a program that initializes a 2D character array with a list of words. Then, take a word
// as input from the user and check if it exists in the array. Display "Found" if it’s there,
// otherwise display "Not Found". 

#include <stdio.h>
#include <string.h>

int main()
{
    char words[5][20] = {"Hello", "World", "C", "Programming", "Fun"};
    char target[20];
    int found = 0;
    printf("Enter a word you want to search: ");
    scanf("%s", target);
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(words[i], target) == 0)
        {
            found = 1;
            break;
        }
    }
    if (found)
        printf("%s found!", target);

    else
        printf("%s not found!", target);

    return 0;
}
