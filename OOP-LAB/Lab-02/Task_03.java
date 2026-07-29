//Write a program that asks user an integer as input and print table of
//given integer up to 10.

import java.util.Scanner;
public class Task_03 {
    public static void main(String[] args){
        int number;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter an integer: ");
        number = input.nextInt();

        System.out.println("==== Table of " + number + " ====");
        for (int i = 1 ; i <= 10 ; i++){
            System.out.println(number + " X " + i + " = " + (number * i));
        }

    }
}
