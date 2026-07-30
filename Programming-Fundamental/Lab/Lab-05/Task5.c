//Write a program that checks if a number is divisible by both 3 and 5 
//using logical operators. 
 
#include<stdio.h>
int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	if (number%3==0 && number%5==0){
		printf("%d is divisible by both numbers 3 and 5",number);
	}
	else{
	 printf("%d is not divisible by both numbers 3 and 5",number);
	}
	
	return 0;
}
