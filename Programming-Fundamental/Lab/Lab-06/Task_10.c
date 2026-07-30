// Write a program to calculate the future value of an investment using the formula: 
// Use pow() to compute the power term. 

#include<stdio.h>
#include<math.h>

int main(){
	float P , r , A;
	int n , t;
	
	printf("Enter the Principle amount (P): ");
	scanf("%f", &P);
	printf("Enter the annual interest rate (r): ");
	scanf("%f", &r);
	printf("Enter number of times interest is compounded per year (n): ");
	scanf("%d", &n);
	printf("Enter the time per year (t): ");
	scanf("%d", &t);
	
	A = P * pow (1 + r / n , n * t);
	printf("Future value of the investment (A) is: %.2f rupees" , A);
	return 0;
}
