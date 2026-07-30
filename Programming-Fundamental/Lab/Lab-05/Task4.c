// Write a program that checks if a user can withdraw money from an ATM.
//Set a maximum withdrawal limit  (e.g., $500). If the amount requested is
//less than or equal to the limit and is a multiple of $20, print 
//"Withdrawal approved." Otherwise, print "Withdrawal denied."

#include<stdio.h>
int main(){
	int maximum_limit=500;
	int amount;
	printf("Enter an amount you want to withdraw: ");
	scanf("%d",&amount);
	if (amount<= maximum_limit && amount%20==0){
		printf("Withdrawal approved.");
	}
	else{
	  printf("Withdrawal denied.");	
	}
	
	return 0;
}
