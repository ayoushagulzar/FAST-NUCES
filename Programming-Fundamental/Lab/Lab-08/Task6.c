//Write a C program to find the saddle point(s) in a given 3x3 matrix.
//A saddle point is an element that is the smallest in its row and the largest in its column. 

#include<stdio.h>

int main(){
	int matrix[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
	int i,j,k;
	int is_saddle_point = 0;
	int max , min , column_index;
	
	printf("The matrix is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		min = matrix [i][0];
		column_index = 0;
		for(j=0;j<3;j++){
			if(min > matrix[i][j]){
			min = matrix[i][j];
			column_index = j;       // store column index of the minimum element
		}
	}	
		printf("Minimum no: in row %d is: %d", i+1 , min);
		printf("\n");
	}
		// check if that min is max in its column
		for(k=0; k<3; k++){
			if(matrix[k][column_index] > min)
				break; // not max in column -> stop checking
		}
		if(k == 3){ // means we did not break -> it is max in column
			printf("Saddle point = %d", min);
			is_saddle_point=1;
		}
	
	if(!is_saddle_point)
		printf("\nNo saddle point found.\n");
	return 0;
}
