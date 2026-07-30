/*
  Question 03: Driving License Eligibility System
 
  Description:
  Develop a program to determine an applicant's driving license eligibility
  based on the following criteria:
  - Applicant must be at least 18 years old.
  - Must pass the eyesight, written, and driving tests.
  - Applicants over 60 years of age must also possess a valid
    medical fitness certificate.
 */
#include<stdio.h>

int main(){
	int age;
	char eyesight_test;
	char written_test;
	char driving_test;
	char fitness_certificate;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	if (age>=18){
    printf("Have you passed(P) or failed(F) your eyesight test?");
    scanf(" %c", &eyesight_test);
       if (eyesight_test=='p' || eyesight_test=='P'){
           printf("Have you passed(P) or failed(F) your written test?");
           scanf(" %c", &written_test);
         if (written_test=='p' || written_test=='P'){
            printf("Have you passed(P) or failed(F) your driving test?");
            scanf(" %c", &driving_test);
                 if (driving_test=='p' || driving_test=='P'){
                 	if (age>60){
                 	 printf("Do you have a medical fitness certificate?(y/n)");
					   scanf(" %c", &fitness_certificate);	
					   if (fitness_certificate=='y' || fitness_certificate=='Y'){
					   		printf("You are eligible for driving license.");
					   }
					    else 
						printf("You are not eligible for driving license.");
					 }
                 else 
                 	printf("You are eligible for driving license."); 	
				 }   
	 }
	   else
	   		printf("You need to retake the written test.");
	   }
	   else
	   	    printf("You might need a prescription for glasses.");
		   }
		else
	    	printf("You are not eligible for a driving license.");
	    	
	    	return 0;
	   }
	
//Start
// Input age
// If age < 18 THEN
//     Print "You are not eligible for a driving license"
// Else
//     Input eyesight_test (P/F)
//     If eyesight_test == 'F' or 'f' THEN
//         Print "You might need a prescription for glasses"
// Else
//         Input written_test (P/F)
//         If written_test == 'F' or 'f' THEN
//             Print "You need to retake the written test"
//  Else
//        Input driving_test (P/F)
//        If driving_test == 'F' or 'f' THEN
//        Print "You are not eligible for driving license"
//  Else
//        If age > 60 THEN
//        Input fitness_certificate (Y/N)
//        If fitness_certificate == 'Y' or 'y' THEN
//        Print "You are eligible for driving license"
//  Else
//        Print "You are not eligible for driving license"
//  Else
//      Print "You are eligible for driving license"
//End




/*
                   Algorithm:

1. Declare variables:
age (int eyesight_test, written_test, driving_test, fitness_certificate (char)
2. Display "Enter your age:"
3. Read age
4. If age < 18:
Print "You are not eligible for a driving license."
Exit
5. Display "Have you passed(P) or failed(F) your eyesight test?"
6. Read eyesight_test
7. If eyesight_test is 'F' or 'f':
Print "You might need a prescription for glasses."
Exit
8. Display "Have you passed(P) or failed(F) your written test?"
9. Read written_test
10. If written_test is 'F' or 'f':
Print "You need to retake the written test."
Exit
11. Display "Have you passed(P) or failed(F) your driving test?"
12. Read driving_test
13. If driving_test is 'F' or 'f':
     Print "You are not eligible for driving license."
     Exit
14. If age > 60:
    Display "Do you have a medical fitness certificate? (Y/N)"
     Read fitness_certificate
     If fitness_certificate is 'Y' or 'y':
        Print "You are eligible for driving license."
     Else:
         Print "You are not eligible for driving license."
15. Else (age = 60):
     Print "You are eligible for driving license."
    */


	

