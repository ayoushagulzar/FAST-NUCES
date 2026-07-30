//Create a program that calculates the number of coins needed to make a given amount of money
// using the smallest number of coins possible. Assume coin denominations are 1, 5, 10, and 25 cents.
// Use a while loop to determine the number of each coin required. 

#include<stdio.h>

int main(){
	int amount , coin25 = 0 , coin10 = 0 , coin5 = 0 , coin1 = 0;
	printf("Enter an amount of money you want to make: ");
	scanf("%d", &amount);
	
	while(amount>=25){
		amount -= 25;
		coin25++;
	}
	while(amount>=10){
		amount -= 10;
		coin10++;
	}
	while(amount>=5){
		amount -= 5;
		coin5++;
	}
	while(amount>=1){
		amount -= 1;
		coin1++;
	}
	
	printf("Coin needed:\n");
	printf("Coin 25 = %d\n", coin25);
	printf("Coin 10 = %d\n", coin10);
	printf("Coin 5 = %d\n", coin5);
	printf("Coin 1 = %d\n", coin1);
	
	return 0;
}

