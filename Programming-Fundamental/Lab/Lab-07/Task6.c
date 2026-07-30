// Write a program that merges two arrays of 5 integers each into a third array of size 10.
// Print the merged array. 

#include<stdio.h>

int main(){
	int arr1[5] = {1 , 2 , 3 , 4 , 5};
	int arr2[5] = { 6 , 7 , 8 , 9 , 10};
	int merged[10];
	int i , j;
	for (i = 0 ; i < 5 ; i++){
		merged[i] = arr1[i];
	}
	for (j = 0 ; j < 5 ; j++){
		merged[i+j] = arr2[j];
	}
	printf("Merged Array = { ");
	for (i = 0 ; i < 10 ; i++){
		printf("%d, ",merged[i]);
	}
	printf("}");
	return 0;
}
