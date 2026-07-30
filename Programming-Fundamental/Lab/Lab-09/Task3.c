// Create a function that replaces all the vowels in a 2d character array with ‘*’ and 
// display the updated array values. 

#include<stdio.h>

void replace(char array[2][6]);

int main() {
    char word[2][6] = { "Hello", "World" }; 
    replace(word);
    return 0;
}

void replace(char array[2][6]) {
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            char ch = array[i][j];
            if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||
                ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||
                ch == 'u' || ch == 'U') {
                array[i][j] = '*';
            }
        }
    }
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            printf("%c", array[i][j]);
        }
        printf("\n");  
    }
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

