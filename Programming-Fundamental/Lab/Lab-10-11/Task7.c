// Write a recursive function to count the number of vowels in a given string. 

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int num0fVowels(const char *string)
{
    if (*string == '\0')
        return 0;

    char ch = tolower(*string);
    int isVowel = 0;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        isVowel = 1;
 
        return isVowel + num0fVowels(string + 1);
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int totalVowels = num0fVowels(str);
    printf("Number of vowels: %d\n", totalVowels);
    return 0;
}