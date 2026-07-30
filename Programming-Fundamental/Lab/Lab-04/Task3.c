// Write a C program to input a character from the user and check 
// whether the given character is a small alphabet, capital alphabet,
// digit, or special character, using if else. 

#include<stdio.h>

int main(){
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	if((ch>='a') && (ch <= 'z')){
		printf("\nYou entered a small alphabet");
	}
	else if((ch>='A') && (ch <= 'Z')){
		printf("\nYou entered a capital alphabet");
	}
	else if((ch>='0') && (ch<='9')){
		printf("\nYou entered a digit");
	}
	else{
		printf("\nYou entered a special character");
	}
	
	
	
	return 0;
}
