/*
  Question 01: Bank Fraud Detection System
 
  Description:
  Develop a program to identify suspicious banking transactions based on the
  following conditions:
  - Total daily spending exceeds Rs. 5000.
  - Transaction occurs outside the customer's usual countries
    (Pakistan and UAE).
  - More than three transactions are made within the same hour.
 */
#include <stdio.h>

int main (){
	float transaction_amount;
	char transaction_country;
	int transactions_in_hour;
	
	printf("Enter transaction amount: ");
	scanf("%f", &transaction_amount);
	printf("Enter your country (first alphabet in capital): ");
	scanf(" %c", &transaction_country);
	printf("Enter no: of transactions in one hour: ");
	scanf("%d", &transactions_in_hour);
	
	
	if (transaction_amount>5000 || (transaction_country!='P'&& transaction_country!='U') || transactions_in_hour > 3){
		printf("Suspicious behavior!");
	}
	else {
		printf("Account is protected.");
	}
	return 0;
}

/*
                      Pseudocode:

1.Start
2. Input transaction_amount
3. Input transaction_country (first capital letter of the country)
4. Input transactions_in_hour
5. IF transaction_amount > 5000
   OR transaction_country is not 'P' AND not 'U'
   OR transactions_in_hour > 3
   THEN
       Print "Suspicious behavior!"
   ELSE
      Print "Account is protected." 
6. End /*
   

/*
             Algorithm

1. Declare transaction_amount as float
2. Declare transaction_country as char
3. Declare transactions_in_hour as int
4. Display "Enter transaction amount:"
5. Read transaction_amount
6. Display "Enter your country (first alphabet in capital):"
7. Read transaction_country
8. Display "Enter no: of transactions in one hour:"
9. Read transactions_in_hour
10. If (transaction_amount > 5000)
    OR (transaction_country is not equal to 'P' AND transaction_country is not equal to 'U')
    OR (transactions_in_hour > 3)
    THEN Print "Suspicious behavior!"
11. Else
     Print "Account is protected."
    */

