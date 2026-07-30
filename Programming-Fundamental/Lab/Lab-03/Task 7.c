// Write a C program that asks the user for their name and age, then prints: 
// Hello [Name], you are [Age] years old. 

#include <stdio.h>
#include<string.h>

int main(){
	char name[20];
	int age;
	printf("Enter you name: ");
	fgets(name, 20 , stdin);
	
	printf("Enter you age: ");
	scanf("%d",&age);
	
	printf("Hello %s, you are %d years old", name, age);
	
}
