/*
  Question 04: Poker Full House Detector
 
  Description:
  Develop a program that accepts five card ranks (1–13) and determines
  whether the hand is a Full House, consisting of:
  - Three cards of one rank.
  - Two cards of another rank.
 */

#include <stdio.h>

int main(){
int num1, num2, num3, num4, num5;
int counter1=0, counter2=0;
printf("Enter 5 natural numbers: ");
scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
int a = num1;
int b = -1;   //no valid number assigned yet
if (num1==a)    counter1++;  //count how many times one of two numbers("a" here) appears
if (num2==a)	counter1++;
if (num3==a)    counter1++;
if (num4==a)    counter1++;
if (num5==a)    counter1++;

     if (num1!=a)   b=num1; //it check the first number different from a and assigned it to b
else if (num2!=a)	b=num2;
else if (num3!=a)   b=num3;
else if (num4!=a)   b=num4;
else if (num5!=a)   b=num5; 

  if (b != -1) {   //checking if b is not invalid
        if (num1 == b) counter2++;    
        if (num2 == b) counter2++;
        if (num3 == b) counter2++;
        if (num4 == b) counter2++;
        if (num5 == b) counter2++;
    }
    if (counter1 + counter2 != 5) //if counter1  + counter2 is not equal to 5 it means there is a third number too
        printf("(%d, %d, %d, %d, %d) is not a full house.", num1, num2, num3, num4, num5);
	else if ((counter1==3 && counter2==2) || (counter1==2 && counter2==3))
	    printf("(%d, %d, %d, %d, %d) is a full house.", num1, num2, num3, num4, num5);
	else
	    printf("(%d, %d, %d, %d, %d) is not a full house.", num1, num2, num3, num4, num5);
	
	return 0;
}
            // Pseudocode
//Start
// Input num1, num2, num3, num4, num5
// a = num1
// counter1 = 0
// counter2 = 0
// b = -1

// If num1 == a then counter1++
// If num2 == a then counter1++
// If num3 == a then counter1++
// If num4 == a then counter1++
// If num5 == a then counter1++

// If num1 != a then b = num1
// Else if num2 != a then b = num2
// Else if num3 != a then b = num3
// Else if num4 != a then b = num4
// Else if num5 != a then b = num5

// If b != -1 then
//     If num1 == b then counter2++
//     If num2 == b then counter2++
//     If num3 == b then counter2++
//     If num4 == b then counter2++
//     If num5 == b then counter2++

// If counter1 + counter2 != 5 then
//     Print "Not a full house"
// Else if (counter1 == 3 and counter2 == 2) or (counter1 == 2 and counter2 == 3) then
//     Print "Full house"
// Else
//     Print "Not a full house"
//End

/*
                   Algorithm:

1. Declare variables:
   num1, num2, num3, num4, num5 (int)
   a, b (int)
   counter1, counter2 (int)

2. Display "Enter 5 natural numbers:"
3. Read num1, num2, num3, num4, num5

4. Set a = num1
5. Set counter1 = 0
6. Set counter2 = 0
7. Set b = -1

8. If num1 == a then counter1 = counter1 + 1
9. If num2 == a then counter1 = counter1 + 1
10. If num3 == a then counter1 = counter1 + 1
11. If num4 == a then counter1 = counter1 + 1
12. If num5 == a then counter1 = counter1 + 1

13. If num1 != a then b = num1
14. Else if num2 != a then b = num2
15. Else if num3 != a then b = num3
16. Else if num4 != a then b = num4
17. Else if num5 != a then b = num5

18. If b != -1 then
    19. If num1 == b then counter2 = counter2 + 1
    20. If num2 == b then counter2 = counter2 + 1
    21. If num3 == b then counter2 = counter2 + 1
    22. If num4 == b then counter2 = counter2 + 1
    23. If num5 == b then counter2 = counter2 + 1

24. If (counter1 + counter2) != 5 then
     Print "(num1, num2, num3, num4, num5) is not a full house."
25. Else if (counter1 == 3 AND counter2 == 2) OR (counter1 == 2 AND counter2 == 3) then
     Print "(num1, num2, num3, num4, num5) is a full house."
26. Else
     Print "(num1, num2, num3, num4, num5) is not a full house."
*/



