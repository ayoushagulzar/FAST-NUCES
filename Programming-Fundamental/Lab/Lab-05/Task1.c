// Design a traffic light system. Ask the user to enter a color (Red, Yellow, Green) and use nested if-else 
// statements to display the corresponding action: 
// • Red: Stop 
// • Yellow: Caution 
// • Green: Go 

#include<stdio.h>

int main(){
	char color;
	printf("Enter a color (first alpabet): ");
	scanf("%c",&color);
	if (color=='R' || color=='r'){
		printf("STOP!");
	}
	else if (color=='Y' || color=='y'){
		printf("Caution!");
	}
	else if (color=='G' || color=='g'){
		printf("GO!");
	}
	return 0;
}
