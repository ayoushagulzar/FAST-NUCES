/*
  Question 05: Number Occurrence Counter
 
  Description:
  Develop a program that repeatedly accepts one-digit numbers (0–9) and
  counts the occurrences of each digit. Input terminates when the user
  enters a value outside the range 0–9, after which the frequency of each
  digit is displayed.
 */

#include <stdio.h>

int main()
{
    int num;
    int count_0=0, count_1=0, count_2=0, count_3=0, count_4=0;
    int count_5=0, count_6=0, count_7=0, count_8=0, count_9=0;

    printf("Enter numbers between 0 and 9 (any other number to stop):\n");

    scanf("%d", &num);

    if (num >= 0 && num <= 9)
    {
        if (num == 0)
            count_0++;
        else if (num == 1)
            count_1++;
        else if (num == 2)
            count_2++;
        else if (num == 3)
            count_3++;
        else if (num == 4)
            count_4++;
        else if (num == 5)
            count_5++;
        else if (num == 6)
            count_6++;
        else if (num == 7)
            count_7++;
        else if (num == 8)
            count_8++;
        else if (num == 9)
            count_9++;

        scanf("%d", &num);
    }

    printf("\nNumber\tNumber of Occurrences\n");
    printf("0\t%d\n", count_0);
    printf("1\t%d\n", count_1);
    printf("2\t%d\n", count_2);
    printf("3\t%d\n", count_3);
    printf("4\t%d\n", count_4);
    printf("5\t%d\n", count_5);
    printf("6\t%d\n", count_6);
    printf("7\t%d\n", count_7);
    printf("8\t%d\n", count_8);
    printf("9\t%d\n", count_9);

    return 0;
}
/*
Algorithm:

1. Declare integer variables: num, count_0, count_1, count_2, count_3, 
count_4, count_5, count_6, count_7, count_8, count_9
2. Initialize all count variables to 0
3. Display "Enter numbers between 0 and 9 (any other number to stop):"
4. Read num
5. While num is between 0 and 9 inclusive, do:
    a. If num == 0, increment count_0
    b. Else if num == 1, increment count_1
    c. Else if num == 2, increment count_2
    d. Else if num == 3, increment count_3
    e. Else if num == 4, increment count_4
    f. Else if num == 5, increment count_5
    g. Else if num == 6, increment count_6
    h. Else if num == 7, increment count_7
    i. Else if num == 8, increment count_8
    j. Else if num == 9, increment count_9
    k. Read next num
6. Print header: "Number\tNumber of Occurrences"
7. Print each digit (0 to 9) along with its count
8. End
*/

//Start
// Initialize count_0 to 0
// Initialize count_1 to 0
// Initialize count_2 to 0
// Initialize count_3 to 0
// Initialize count_4 to 0
// Initialize count_5 to 0
// Initialize count_6 to 0
// Initialize count_7 to 0
// Initialize count_8 to 0
// Initialize count_9 to 0

// Print "Enter numbers between 0 and 9 (any other number to stop):"
// Read num

// While num >= 0 AND num <= 9
//     If num == 0 THEN count_0 = count_0 + 1
//     Else if num == 1 THEN count_1 = count_1 + 1
//     Else if num == 2 THEN count_2 = count_2 + 1
//     Else if num == 3 THEN count_3 = count_3 + 1
//     Else if num == 4 THEN count_4 = count_4 + 1
//     Else if num == 5 THEN count_5 = count_5 + 1
//     Else if num == 6 THEN count_6 = count_6 + 1
//     Else if num == 7 THEN count_7 = count_7 + 1
//     Else if num == 8 THEN count_8 = count_8 + 1
//     Else if num == 9 THEN count_9 = count_9 + 1
//     Read num
// End While

// Print "Number    Number of Occurrences"
// Print "0        ", count_0
// Print "1        ", count_1
// Print "2        ", count_2
// Print "3        ", count_3
// Print "4        ", count_4
// Print "5        ", count_5
// Print "6        ", count_6
// Print "7        ", count_7
// Print "8        ", count_8
// Print "9        ", count_9
//End




