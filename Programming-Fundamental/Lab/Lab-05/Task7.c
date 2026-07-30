//Write a program that asks for a movie rating (1 to 5) for movie “The Lion King”
//from user and provides feedback based on the rating: 
// • 5: Excellent 
// • 4: Good 
// • 3: Average 
// • 2: Poor 
// • 1: Terrible

#include<stdio.h>

int main(){
int number;
printf("Enter a number (1-5) to rate the movie The Lion King: ");
scanf("%d",&number);

switch(number){
	case 1: printf("Terrible");        break;
	case 2: printf("Poor");            break;
	case 3: printf("Average");         break;
	case 4: printf("Good");            break;
	case 5: printf("Excellent");       break;
	default: printf("Out of range.");
}
	
        return 0;
}


