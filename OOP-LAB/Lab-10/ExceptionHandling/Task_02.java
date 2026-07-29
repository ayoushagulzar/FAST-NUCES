//Calculate the factorial of a given integer n. The program should take input from the user
//in the form of a string and convert it to an integer (Integer.parseInt()). Write a Java
//program that handles the following exceptions:
//         If the input string is null or empty, the program should display an appropriate
//        error message.
//         If the input string does not represent a valid integer (i.e., it contains non-numeric
//        characters), the program should display an appropriate error message.
//         If the input integer is negative, the program should display an appropriate error
//        message.
//         If the input integer is too large to calculate the factorial (i.e., it causes an integer
//        overflow), the program should display an appropriate error message.
//        Your program should use try-catch blocks to handle the exceptions. If the input integer is
//        valid and can be used to calculate the factorial, the program should calculate the factorial
//        and display it to the user.

package ExceptionHandling;

import java.util.*;

class FactorialCalculator {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        String input = sc.nextLine();

        if (input == null || input.trim().isEmpty()) {
            System.out.println("Error: Input is null or empty.");
            return;
        }

        int n;

        try {
            n = Integer.parseInt(input);

            if (n < 0) {
                System.out.println("Error: Negative numbers are not allowed.");
                return;
            }

            long factorial = 1;

            for (int i = 1; i <= n; i++) {

                if (factorial > Long.MAX_VALUE / i) {
                    System.out.println("Error: Number too large, factorial causes overflow.");
                    return;
                }

                factorial *= i;
            }

            System.out.println("Factorial of " + n + " is: " + factorial);

        } catch (NumberFormatException e) {
            System.out.println("Error: Input is not a valid integer.");
        }
    }
}
