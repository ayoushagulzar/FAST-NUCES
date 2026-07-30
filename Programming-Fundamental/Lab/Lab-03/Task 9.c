// Write a C program that prints the following using escape sequences: 
// Name: [Your Name] 
// Roll Number: [Your Roll] 
// \tTabbed Line 
// \nNew Line 

#include<stdio.h>

int main(){
	char name[] = "Ayousha";
	int RollNumber = 3069;
	
	printf("Name:\t %s",name);
	printf("\nRoll no:\t%d",RollNumber); 
	return 0;
}
