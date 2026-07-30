//Determine whether a number entered by the user is a multiple of 3.

#include<stdio.h>

int main(){
     int number;
     printf("Enter the number: ");
     scanf("%d",&number);
     if(number%3==0){
     	printf("The number is multiple of three");
	    }
	 else{
	 	printf("The number is not multiple of three");
		 }
	 	
	 	return 0;
}
