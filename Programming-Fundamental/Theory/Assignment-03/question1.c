/*
 * Question 01: Loan Repayment Calculator
 *
 * Description:
 * Develop a recursive program to calculate a loan repayment schedule.
 * The program should:
 * - Apply yearly interest to the remaining loan.
 * - Display the remaining loan after each year.
 * - Calculate the total repayment.
 * - Handle extra yearly payments through recursion.
 */

#include <stdio.h>

float calculateRepayment(float loan, float interestRate, int years, float yearlyInstallement)
{
    static int y = 1;
    if (loan <= 0)
    {
        printf("Loan fully repaid!");
        return 1;
    }
    if (years == 0)
    {
        printf("No year remaining!");
        return 1;
    }

    float remaining = (loan - yearlyInstallement) * (1 + interestRate);

    if (remaining < 0)
        remaining = 0;

    printf("Year: %d | Remaining Loan: %.2f\n", y, remaining);
    y++;
    return yearlyInstallement + calculateRepayment(remaining, interestRate, years - 1, yearlyInstallement);
}
int main()
{
    float LOAN = 100000;
    float rate = 0.05; // 5%
    int yrs = 3;
    float installement;
    printf("Enter yearly installement: ");
    scanf("%f", &installement);
    float total = calculateRepayment(LOAN, rate, yrs, installement);
    printf("Total amount paid over %d years is %.2f", yrs, total);

    /*================================== GENERAL CASE ======================================*/
    // float LOAN;
    // float rate; // 5%
    // int yrs;
    // printf("Enter loan: ");
    // scanf("%f", &LOAN);
    // printf("Enter interset rate (in decimal): ");
    // scanf("%f", &rate);
    // printf("Enter years: ");
    // scanf("%f", &yrs);
    // float installement;
    // printf("Enter yearly installement: ");
    // scanf("%f", &installement);
    //  float total = calculateRepayment(LOAN, rate, yrs , installement);
    // printf("Total amount paid over %d years is %.2f", yrs, total);

    return 0;
}