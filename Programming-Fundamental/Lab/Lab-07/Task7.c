// Write a function that searches for a specific integer in an array of 10 integers and
// returns its index. If the integer is not found, return -1.

#include<stdio.h>

int main(){
	int arr[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
	int number ;
	printf("Enter the number you want to search: ");
	scanf("%d", &number);
	int i ;
	for (i = 0 ; i < 10 ; i++){
		if (arr[i] == number){
			printf("The number is at index %d", i); 	
			return 0;	
		}
			
	}
	printf("The number is not in the array.\n");
	return -1;
}
