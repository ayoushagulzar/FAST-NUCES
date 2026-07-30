/*
  Question 02: Quadrant Identifier
 
  Description:
  Develop a program that accepts the x and y coordinates of a point and
  determines whether it lies in Quadrant I, II, III, or IV of the Cartesian
  coordinate plane.
 */

#include <stdio.h>

int main (){
	int x , y;
	
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("Enter the value of y: ");
	scanf("%d", &y);
	
	
	if (x > 0 && y > 0){
		printf("The point (%d , %d) lies in Quadrant I.", x , y);
	}
	else if (x < 0 && y > 0){
		printf("The point (%d , %d) lies in Quadrant II.", x , y);
	}
	else if (x < 0 && y < 0){
		printf("The point (%d , %d) lies in Quadrant III.", x , y);
	}
	else if (x > 0 && y < 0){
		printf("The point (%d , %d) lies in Quadrant IV.", x , y);
	}
	else {
		printf("Invalid!");
	}
	return 0;
}

                           //Pseudocode: 
//Start                           
// Input x, y
// If x > 0 AND y > 0 THEN
//     Print "Point lies in Quadrant I"
// Else if x < 0 AND y > 0 THEN
//     Print "Point lies in Quadrant II"
// Else if x < 0 AND y < 0 THEN
//     Print "Point lies in Quadrant III"
// Else if x > 0 AND y < 0 THEN
//     Print "Point lies in Quadrant IV"
//End

              //ALGORITHM

//1. Declare two integer variables x and y.
//2. Display "Enter the value of x:".
//3. Read the value of x from the user.
//4. Display "Enter the value of y:".
//5. Read the value of y from the user.
//6. If x > 0 and y > 0, then display "The point (x, y) lies in Quadrant I."
//7. Else if x < 0 and y > 0, then display "The point (x, y) lies in Quadrant II."
//8. Else if x < 0 and y < 0, then display "The point (x, y) lies in Quadrant III."
//9. Else if x > 0 and y < 0, then display "The point (x, y) lies in Quadrant IV."
//10. Else display "Invalid!".



