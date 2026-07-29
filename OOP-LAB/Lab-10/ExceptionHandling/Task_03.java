//Ask the user to enter two numbers and perform a mathematical operation on them. The
//program should handle the following exceptions:
//         If the input for either number is null or empty, the program should display an
//         appropriate error message.
//         If the input for either number does not represent a valid integer or double (i.e., it
//        contains non-numeric characters), the program should display an appropriate error
//        message.
//         If the user attempts to divide by zero, the program should display an appropriate
//         error message.
//Your program should use try-catch blocks to handle the exceptions. If the input is valid,
//the program should perform the mathematical operation and display the result to the user.

package ExceptionHandling;

import java.util.*;

class Calculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number: ");
        String input1 = sc.nextLine();

        System.out.print("Enter second number: ");
        String input2 = sc.nextLine();

        if (input1 == null || input1.trim().isEmpty() ||
                input2 == null || input2.trim().isEmpty()) {

            System.out.println("Error: One or both inputs are null or empty.");
            return;
        }

        try {
            double num1 = Double.parseDouble(input1);
            double num2 = Double.parseDouble(input2);

            System.out.print("Enter operation (+, -, *, /): ");
            char op = sc.next().charAt(0);

            double result;

            switch (op) {
                case '+':
                    result = num1 + num2;
                    System.out.println("Result: " + result);
                    break;

                case '-':
                    result = num1 - num2;
                    System.out.println("Result: " + result);
                    break;

                case '*':
                    result = num1 * num2;
                    System.out.println("Result: " + result);
                    break;

                case '/':
                    if (num2 == 0) {
                        System.out.println("Error: Cannot divide by zero.");
                        return;
                    }
                    result = num1 / num2;
                    System.out.println("Result: " + result);
                    break;

                default:
                    System.out.println("Error: Invalid operation.");
            }

        } catch (NumberFormatException e) {

            System.out.println("Error: Invalid number format.");
        }
    }
}
