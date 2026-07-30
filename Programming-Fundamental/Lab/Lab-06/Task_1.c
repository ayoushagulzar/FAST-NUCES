// Which loop system would be better for user input. Justify your answer by creating 
// a program that takes a value and adds it to a variable and prints it repeatedly
// until the user enters a zero value. 

#include<stdio.h>

int main(){
	int number, sum = 0;
	
	do{
		printf("Enter a number: ");
		scanf("%d", &number);
		sum+=number;
	}while(number!=0);
	
	printf("Sum = %d", sum);
	return 0;
}


