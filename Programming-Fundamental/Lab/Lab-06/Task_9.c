// A cinema charges tickets per group. If each person pays 250.50, write a program
// that calculates the minimum total cost for a group using ceil() (rounding up to nearest rupee). 

#include<stdio.h>
#include<math.h>
 
int main(){
	float cost_of_ticket_per_person = 250.50;
	int number_of_people;
	
	printf("How many people are in your group? ");
	scanf("%d", &number_of_people);
	
	float total_cost = number_of_people * cost_of_ticket_per_person;
	printf("Minimum total cost for a group is %.0f", ceil(total_cost));
	return 0;
}
