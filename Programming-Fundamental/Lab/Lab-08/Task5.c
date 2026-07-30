// Write a program to take a 2D array input from the user and display its transpose. 

#include <stdio.h> 
 
int main() { 
    int array[3][4];
    int i,j; 
    printf("Enter a 2D array:\n");
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 4; j++) { 
           scanf("%d ",&array[i][j]);
        } 
    } 
    printf("\nThe array is:\n");
      for (i = 0; i < 3; i++) { 
        for (j = 0; j < 4; j++) { 
          printf("%d\t ",array[i][j]);
        } 
        printf("\n"); 
    } 
    printf("\nTranspose of the  array is:\n");
      for (i = 0; i < 4; i++) { 
        for (j = 0; j < 3; j++) { 
          printf("%d\t ",array[j][i]);
        } 
        printf("\n"); 
    } 
    return 0; 
} 
