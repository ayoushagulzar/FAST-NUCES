// Write a C program that takes two integers as input and displays their 
// sum, difference, product, and quotient. 

#include<stdio.h>

int main(){
	int num1, num2;
	printf("\nEnter first number: ");
	scanf("%d",&num1);
	printf("\nEnter second number: ");
	scanf("%d",&num2);
	int sum = num1+num2;
	int difference = num1-num2;
	int product = num1*num2;
	float quotient = (float)num1/num2;
	
	printf("\nThe sum of %d and %d is %d", num1, num2, sum);
	printf("\nThe difference of %d and %d is %d", num1, num2, difference);
	printf("\nThe product of %d and %d is %d", num1, num2, product);
	
	if (num2!=0){
	     printf("\nThe quotient of %d and %d is %.1f", num1, num2, quotient);
	}
	else {
		printf("Undefined!");
	}
	return 0;
}
