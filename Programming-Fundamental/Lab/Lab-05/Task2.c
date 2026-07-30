// Write a program that categorizes a person's age into different life stages:
//Child, Teenager, Adult, and Senior, using nested if-else statements. 

#include<stdio.h>
int main(){
	int age;
	printf("Enter a your age: ");
	scanf("%d",&age);
	if (age <= 12){
		printf("You are a child.");
	}
	else if (age >= 13 && age <= 19){
		printf("You are a Teenager.");
	}
	else if (age >= 20 && age <= 59){
		printf("You are an Adult.");
	}
	else if (age >= 60){
	    printf("You are a Senior.");
	}
	return 0;
}
