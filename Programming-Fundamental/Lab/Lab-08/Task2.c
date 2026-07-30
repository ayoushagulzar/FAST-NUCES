// Write a program to display a multiplication table of N up to 10 using nested loops. 
 
#include <stdio.h> 
 
int main() { 
    int i,j,number; 
    printf("Enter a number: ");
	scanf("%d",&number);
	for (i = 1; i <= 10; i++) { 
    	for (j = number; j <= number; j++) { 
        	printf("%d X %d = %d\n", j , i , i*j);
       } 
    } 
	   return 0;}
