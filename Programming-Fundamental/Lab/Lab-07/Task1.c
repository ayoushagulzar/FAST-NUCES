// Write a C Program that takes a user input array and prints the sum of its elements. 

#include<stdio.h>

int main(){
	
	int number[9];
	int sum = 0 , i;
	for (i = 0 ; i < 9 ; i++){
		printf("Enter the array at index %d : ",i);
		scanf("%d",&number[i]);
		sum+=number[i];
	}
		printf("Sum = %d", sum);
	return 0;
}
