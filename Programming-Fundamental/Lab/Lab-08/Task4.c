//Write a program to initialize and display a 2x2x2 3D array. 

#include <stdio.h> 
 
int main() { 
    int array[2][2][2] = {
    	{{2 , 4},{6 , 8}},
		{{3 , 6},{9 , 12}}
	};	
	int i,j,k; 
    for (i = 0; i < 2; i++) { 
        for (j = 0; j < 2; j++) { 
         for (k = 0; k < 2; k++) { 
         printf("\t%d\t", array[i][j][k]);
           }
           printf("\n");
           printf("\n");
        } 
        printf("\n");
    } 
   
    return 0; 
} 
