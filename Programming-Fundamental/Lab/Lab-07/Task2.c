// Write a program in C to read n number of values in an array and display it in reverse order  

#include<stdio.h>

int main(){
	
	int n , i;
	printf("Enter no: of values: ");
	scanf("%d", &n);
	int number[n];
	for (i = 0 ; i < n ; i++){
		printf("Enter the array at index %d : ",i);
		scanf("%d",&number[i]);
	}
	printf("Reverse of the array is: = ");
		printf("{");
	for (i = n-1 ; i >= 0  ; i--){
		printf("%d," , number[i]);
	}
		printf("}");
	return 0;
}
