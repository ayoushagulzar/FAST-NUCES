// Write a program to swap two integers using XOR ^ instead of a third variable.

#include<stdio.h>

int main(){
	int number1 , number2;
	printf("Enter first number: ");
	scanf("%d", &number1);
	printf("Enter second number: ");
	scanf("%d", &number2);
	
	printf("Before swapping:\n");
	printf("The first number is %d and the second number is %d\n", number1 , number2);
	
	number1 = number1 ^ number2;
	number2 = number1 ^ number2;
	number1 = number1 ^ number2;

	printf("After swapping:\n");
	printf("The first number is %d and the second number is %d", number1 , number2);
	return 0;
}
