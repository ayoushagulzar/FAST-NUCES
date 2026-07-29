// Write a Java program that works as a simple calculator for the addition,
// subtraction, multiplication, division and remainder operations. Take two integer
// numbers from the user and perform all the operations.

import java.util.Scanner;

public class Task_03{
    public static void main(String[] args) {
        int num1;
        int num2;

        Scanner numbers = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        num1 = numbers.nextInt();
        System.out.print("Enter the second number: ");
        num2 = numbers.nextInt();

        System.out.println("The sum of " + num1 + " and " + num2 + " is " + (num1 + num2));
        System.out.println("The difference of " + num1 + " and " + num2 + " is " + (num1 - num2));
        System.out.println("The product of " + num1 + " and " + num2 + " is " + (num1 * num2));

        if (num2!=0){
            System.out.println("The quotient of " + num1 + " and " + num2 + " is " + ((float) num1 / num2));
            System.out.println("The remainder of " + num1 + " and " + num2 + " is " + (num1 % num2));
        }
        else{
            System.out.println("Denominator can not be zero.");
        }
    }
}