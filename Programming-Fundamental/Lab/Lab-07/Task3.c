// Given an array arr[] of size N which contains elements from 0 to N-1, you need to find all 
// the elements occurring more than once in the given array.  


#include<stdio.h>

int main(){
	
	int n , i , j , count = 0;
	printf("Array Size: ");
	scanf("%d", &n);
	int arr[n];
	int isDuplicate[n];
	
	for (i = 0 ; i < n ; i++){
		isDuplicate[i] = 0;
	}
	for (i = 0 ; i < n ; i++){
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for (i = 0 ; i < n ; i++){
		if(isDuplicate[i])
			continue;
			
		count= 1;
				
		for (j = i+1 ; j < n; j++){
			if (arr[i] == arr[j]){
				count++;
				isDuplicate[j]= 1;
			}
		}
		if (count > 1){
			printf("Number %d occurs more than once.\n", arr[i]); }
	}
	
		
	return 0;
}
