// Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
// characters each).Determines if each word (row) is a palindrome. Outputs “Palindrome” or
// “Not Palindrome” for each word. A palindrome is a word that reads the same forward and 
// backward. For example: "madam", "racecar", "level", "radar". 

#include <stdio.h>
#include <string.h>

int main() {
    char word[5][20];

    printf("Enter 5 words:\n");
    for (int i = 0; i < 5; i++) {
        fgets(word[i], 20, stdin);
        word[i][strcspn(word[i], "\n")] = '\0';
    }

    printf("The words you typed are:\n");
    for (int i = 0; i < 5; i++) {
        fputs(word[i], stdout);
        int len = strlen(word[i]);
        int isPalindrome = 1; 

        for (int j = 0; j < len / 2; j++) {
            if (word[i][j] != word[i][len - 1 - j]) {
                isPalindrome = 0;
                break;
            }
        }

        if (isPalindrome)
            printf(" is a Palindrome.\n");
        else
            printf(" is Not Palindrome.\n");
    }

    return 0;
}
