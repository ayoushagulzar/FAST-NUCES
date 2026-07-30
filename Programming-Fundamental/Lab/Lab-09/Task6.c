// Attendance for 4 students over 5 classes is recorded as 1 (present) or 0 (absent).Store the
// data in a 2D array. Write functions to take input all the attendance records.Calculate the
// attendance percentage for each student. Print a warning for students below 75% attendance. 

#include<stdio.h>

void attendanceRecord(int attendance[4][5]){
	int i , j;
	for (i = 0; i < 4 ; i++){
		printf("Enter Student %d attendance (1 for present and 0 absent):\n", i+1);
		for(j = 0 ; j < 5 ; j++){
			scanf("%d", &attendance[i][j]);
		}
	}
	for (i = 0; i < 4 ; i++){
		printf("\nStudent %d attendance:\n", i+1);
		int sum=0;
		for(j = 0 ; j < 5 ; j++){
			if(attendance[i][j] == 1){
				printf("P ");
				sum++;
			}
			else
				printf("A ");	
		}
		float percent = (sum / 5.0) * 100;
			printf("\nAttendance Percentage = %.2f%\n" , percent);
		if(percent < 75){
			printf("WARNING: Attendance below 75%. Please attend classes regularly!\n");
		}
	}
}
int main(){
	int studentAttendance[4][5];
	attendanceRecord(studentAttendance);
	return 0; 
}
