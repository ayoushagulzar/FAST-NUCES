// Write a program to multiply a number by 2, 4, and 8 using left shift <<. 
// Hint: num << 1 = num * 2. 

#include<stdio.h>

int main (){
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	int result2 = number << 1;  // multiply by 2
	printf("Number after multiplying by 2 is: %d\n ", result2); 
	
 	int result4 = number << 2;  // multiply by 4
	printf("Number after multiplying by 4 is: %d\n ", result4);
	
	int result8 = number << 3;  // multiply by 8
	printf("Number after multiplying by 8 is: %d\n", result8);
	
	return 0;
}
