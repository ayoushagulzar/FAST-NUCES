// Check if a user is eligible for a loan based on their credit score.
//If the score is 700 or above, they are eligible. 
// If it's between 600 and 699, they may need to provide additional documentation.
//Below 600 is not eligible. 

#include<stdio.h>

int main(){
	int credit_score;
	printf("Enter your creadit score: ");
	scanf("%d",&credit_score);
	
	if(credit_score>= 700){
		printf("You are eligible for loan.");
		}
	else if(credit_score>=600 && credit_score<=699){
		printf("You may need to provide additional documantation for getting loan.");
	}	
	else{
		printf("Sorry, you are not eligible for loan");
	}
	return 0;
}
