//Write a program to add two 2x2 matrices using nested loops. 

#include <stdio.h> 
 
int main() { 
    int array1[2][2] = {{2 , 4},{6 , 8}};
    int array2[2][2] = {{1 , 3},{5 , 7}};
	int sum[2][2];
    int i,j; 
    for (i = 0; i < 2; i++) { 
        for (j = 0; j < 2; j++) { 
            sum[i][j] = array1[i][j] + array2[i][j];
        } 
    } 
    printf("Sum of the arrays:\n ");
      for (i = 0; i < 2; i++) { 
        for (j = 0; j < 2; j++) { 
          printf("%d ", sum[i][j]);
        } 
        printf("\n"); 
    } 
    return 0; 
} 
