// Write a program that checks if a year is a leap year using the modulus operator. 
#include<stdio.h>
int main(){
	int year;
	printf("Enter an year: ");
	scanf("%d",&year);
	if (year%400== 0 || (year%4==0 && year%100!= 0)){
		printf("The year is a leap year.");
	}
	else{
	  printf("The year is not a leap year.");	
	}
	
	return 0;
}
