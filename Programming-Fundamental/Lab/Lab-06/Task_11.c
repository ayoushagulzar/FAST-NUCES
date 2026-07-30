// The height of a building is H. The angle of the sun’s elevation is θ radians. 
// Write a program to calculate the length of the shadow using: 
// L = H / tan(𝜃) 


#include<stdio.h>
#include<math.h>

int main(){
	float height , length , angle;
	float pi = 3.14;
	printf("Enter the height of the building (in meters): ");
	scanf("%f", &height);
	printf("Enter the angle of the sun's elevation: ");
	scanf("%f", &angle);
	
	if (angle == 90 || angle == 0) {
    printf("Error: Angle cannot be 0 or 90 degrees.\n");
    return 1;
	}
	angle = angle * pi / 180;
	
	length = height / tan(angle);
	printf("The length of the shadow is: %.2f meters. ", length);
	return 0;
}
