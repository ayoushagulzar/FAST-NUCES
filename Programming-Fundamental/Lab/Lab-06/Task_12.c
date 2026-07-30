// Write a program to check if a given number is even or odd using the bitwise & operator. 
// Hint: num & 1 → 0 (even), 1 (odd). 

#include<stdio.h>

int main (){
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	if ((number & 1) == 0){
		printf("%d is a even number.", number);
	}
	else
		printf("%d is a odd number.", number);
	return 0;
}
