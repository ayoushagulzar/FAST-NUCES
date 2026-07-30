//You are an event planner tasked with organizing a series of workshops. Each workshop requires a different 
//number of participants, and you need to determine the total ways to arrange these participants for one 
//workshop. Your task is to calculate the factorial of the number of participants. The factorial of a number n 
//(denoted as n!) is the product of all positive integers from 1 to n. For example: If there are 5 participants, the 
//total arrangements would be 5! = 5 x 4 x 3 x 2 x 1 = 120. 

#include<stdio.h>

int main(){
	int number;
	int i;
	long long int factorial = 1;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	if(number==0){
		printf("The factorial of %d is 1", number);
	}
	else if(number>0){
		for( i = 1; i <= number; i++){
			factorial = factorial * i;
		}
			printf("The factorial of %d is %lld", number, factorial);
	}
	else{
		printf("Invalid number!");
	}
	return 0;
}
