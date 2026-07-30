//Write a recursive function that takes a string as input and returns the reversed string. 

#include <stdio.h>
#include <string.h>

char *reverseString(char string[], int start, int end)
{
    if (start >= end)
        return string;
    else
    {
        char temp;
        temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        return reverseString(string, start + 1, end - 1);
    }
}

int main()
{
    char str[20];
    printf("Enter the string you want to reverse: ");
    scanf("%s", str);
    int length = strlen(str);
    reverseString(str, 0, length - 1);
    printf("The reverse string is %s.", str);
    return 0;
}