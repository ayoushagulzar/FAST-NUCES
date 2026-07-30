// Write a program to see greetings according to time using a 24-hour format. 
//If the time between is 5 to 11 it should greet “Good Morning”,
//if time is between 12 to 18 it should greet “Good Evening”,
//if time between 18 to 24 it should greet “Good Night”. 

#include<stdio.h>

int main(){
	int time;
	printf("Enter time using a 24-hour format: ");
	scanf("%d",&time);
	
	if(time>=0 && time<=4){
	printf("Sleeping time!");	
	}
	else if(time>=5 && time<=11){
		printf("Good Morning!");
	}
	else if(time>=12 && time<=18){
		printf("Good Evening!");
	}
	else if(time>18 && time<24){ //last digit in 24-hour format is 23:59
	printf("Good Night!");
	}
	else{
	printf("Invalid time!");
}
  return 0;  	
}
