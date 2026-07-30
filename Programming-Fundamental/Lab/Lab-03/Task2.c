//Perform an arithmetic operation based on the operator entered by the user.

#include<stdio.h>

int main(){
	int num1=240;
	int num2=10;
	char oprtr;
	printf("Which operation do you want to perform?? (enter symbol): ");
	scanf("%c",&oprtr);
	
	switch (oprtr){
		case '+' : printf("The sum of the numbers is: %d ", num1+num2);
		            break;
		case '-' :  printf("The difference of the numbers is: %d ", num1-num2);
		            break;
		case '*' :  printf("The product of the numbers is: %d ", num1*num2);
		            break;            
	    case '/' :  printf("The quotient is: %d ", num1/num2);
		            break;            
		        }
	return 0;
}
