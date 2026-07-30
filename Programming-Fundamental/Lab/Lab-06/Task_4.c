// Write a program to check whether a number is an Armstrong number or not. 
// An Armstrong number is a number that is equal to the sum of cubes of its digits. 

#include<stdio.h>
#include<math.h>

int main(){
	int number , number_of_digits;
	int sum=0 , last_digit;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	int original_number = number;
	
	int temp = number;
    number_of_digits = 0;
    while (temp != 0) {
        number_of_digits++;
    	temp /= 10;
 }
	
	do{
		last_digit = number%10;
		sum+= pow(last_digit, number_of_digits);
		number = number/10;
	}while(number!=0);
	if (sum == original_number){
		printf("The number is an Armstrong number. ");
	}
	else{
		printf("The number is not an Armstrong number. ");	
	}
	return 0;
}
