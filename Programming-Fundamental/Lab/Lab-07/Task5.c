// Implement a program that counts the number of whitespace characters in a given string
// by using a scanset to identify whitespace. 

#include<stdio.h>

int main(){
	char string[100];
	int count = 0 , i;
	printf("Enter a string: ");
	scanf("%[^\n]", string);

	for(i = 0 ; i < 100 ; i++){
		if(string[i] == ' '){
			count++;
		}
	}
	printf("Spaces = %d", count);
	return 0;
}
