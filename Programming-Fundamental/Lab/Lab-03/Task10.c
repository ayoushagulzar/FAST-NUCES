// Write a C program that asks the user for a floating-point number and
// prints it with 2 decimal places and with 6 
// decimal places using printf precision specifiers. 
#include<stdio.h>

int main(){
	float number;
	printf("\nEnter a number: ");
	scanf("%f",&number);
	
	printf("\nThe number with 2 decimal places precision is: %.2f", number);
	printf("\nThe number with 6 decimal places precision is: %.6f", number);

	return 0;
}
