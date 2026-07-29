// Write an application that accepts two doubles, multiply these together and
// display the product.

import java.util.Scanner;
public class Task_02 {
    public static void main(String[] args){
        int num1;
        int num2;

        Scanner numbers = new Scanner (System.in);

        System.out.print("Enter the first number: ");
        num1 = numbers.nextInt();
        System.out.print("Enter the second number: ");
        num2 = numbers.nextInt();

        System.out.println("The product of " + num1 + " and " + num2 + " is " + (num1*num2));

        numbers.close(); // closing scanner
    }
}
