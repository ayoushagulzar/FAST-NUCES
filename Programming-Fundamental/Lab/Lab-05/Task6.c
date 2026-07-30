// 6. Write a program using a ternary operator to find the maximum of two numbers. 

#include<stdio.h>
int main(){
	int number1 , number2, max;
	printf("Enter first number: ");
	scanf("%d",&number1);
	printf("Enter second number: ");
	scanf("%d",&number2);
    (number1>number2)? printf("%d is a maximum number.",number1): printf("%d is a maximum number.",number2);
   
	return 0;
}
