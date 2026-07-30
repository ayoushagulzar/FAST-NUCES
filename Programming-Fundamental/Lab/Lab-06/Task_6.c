// Create a program that takes a positive integer input from the user and reverses 
// its digits using a while loop. 
 
#include<stdio.h>

int main(){
	int number, reverse = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	int original_number = number;
	
	while(number!=0){
		int remainder = number % 10;
		reverse = (reverse * 10) + remainder;
		number /= 10;	
	}
	
	printf("The reverse of %d is %d", original_number , reverse);
	
	return 0;
}
