// A hospital has three wards (General, ICU, Private), each with a fixed number of 5 beds.
// Use a 2D array to store bed status (1 for occupied, 0 for empty). Write functions to
// record the current status of all wards.Count how many beds are occupied and how many are
// available using pointers. Display the status neatly. 

#include<stdio.h>

void func(int array[3][5]);
int main(){
	int arr[3][5];
	func(arr);
	return 0;
}
void func(int array[3][5]){
	int i,j, occupied = 0 , empty = 0;
	printf("Enter bed Status (1 for occupied, 0 for empty):");
	for (i=0; i<3; i++){
		printf("\nWard %d:\n", i+1);
		for(j=0; j<5; j++){
			scanf("%d", &array[i][j]);
		}
	}
	printf("\nBed Status:");
	for (i=0; i<3; i++){
		printf("\nWard %d:\n", i+1);
		for(j=0; j<5; j++){
			printf("%d\t", array[i][j]);
		}	
	}
    int *p = &array[0][0];  // pointer to first element
    for (i = 0; i < 15; i++) {
        if (*(p + i) == 1)
            occupied++;
        else
            empty++;
    }
    printf("\n\nOccupied Beds: %d\n", occupied);
    printf("Empty Beds: %d\n", empty);
}
