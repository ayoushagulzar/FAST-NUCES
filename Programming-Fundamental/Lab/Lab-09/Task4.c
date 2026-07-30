// Write a program to search for a specific element in a 2D array using pointers.
// If the element is found, print its row and column indices. 

#include<stdio.h>

void findElement(int array[3][4] , int target);
int main(){
	   int arr[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };
    int target;
    printf("Enter the element you want to search: ");
    scanf("%d", &target);
    findElement(arr, target);

	return 0; 
}
void findElement(int array[3][4] , int target){
	int i,j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			if (*(*(array+i)+j) == target){
				printf("Element %d found at index[%d][%d].", target , i , j);
				return;
			}
		}
	}
	  printf("Element %d NOT found in the array.\n", target);
}
