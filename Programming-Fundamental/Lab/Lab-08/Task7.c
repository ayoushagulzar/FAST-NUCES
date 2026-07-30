// Write a C program that generates a sequence of prime numbers within a given range 
// using nested loops.

#include<stdio.h>

int main(){
	int number[20];
	int isPrime , i , j;
	
	printf("Prime numbers from 1 to 20: ");
	for (i = 2 ; i < 20 ; i++){
		isPrime = 1;
	for (j = 2 ; j <= i/2 ; j++){
		if ( i % j == 0){
			isPrime = 0;
			break;}
		}
		if (isPrime){
		printf("%d " , i );}	
	}

	
	return 0;
}
