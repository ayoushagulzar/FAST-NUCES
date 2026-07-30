// Write a program to count how many 1s are present in the binary form of a number
// using bitwise operators. 

#include<stdio.h>

int main(){
	int number , counter = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	int original_number = number;
	while(number!=0){
		if ((number & 1) == 1){
			counter+=1;
		}
		number = number >> 1;
	}
	printf("There are %d 1s in %d", counter , original_number);
}
