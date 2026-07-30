// An online shopping store is providing discounts on the items due to Eid.
// If the cost of items is less than 2000 it will give a discount of up to 5%.
// If the cost of shopping is 2000 to 4000, a 10% discount will be applied.
// If the cost of shopping is 4000 to 6000, a 20% discount will be applied.
// If it's more than 6000 then a 35% discount will be applied to the cost of shopping.
// Print the actual amount, saved amount and the amount after discount.
// The Minimum amount eligible for a discount is 500. 

#include<stdio.h>

int main(){
	int weight;
	printf("Enter the weight of a package (in kilograms):");
	scanf("%d",&weight);
	if(weight<=5){
	printf("Your shipping cost is $10");
	}
	else if(weight>=6 && weight<=10){
	printf("Your shipping cost is $20");
	}
	else{
	printf("Your shipping cost is $30");
	}
	
	return 0;
}
