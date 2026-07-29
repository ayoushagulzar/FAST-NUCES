// Write a Java program that calculates a student’s total percentage. You are
// required to do the following using appropriate data types.
//  Take 5 marks as input from the user.
//  Sum the numbers together.
//  Calculate the total percentage.
//  Display the student’s percentage.

import java.util.Scanner;
public class Task_01 {

    public static void main(String[] args){
        int [] marks = new int[5];
        int sum = 0;
        float percentage;

        Scanner sc = new Scanner(System.in);
        for (int i = 0 ; i < 5; i++){
            System.out.println("Enter marks " + (i+1) +": ");
            marks[i] = sc.nextInt();
            sum+=marks[i];
        }

        percentage = sum/5.0f;
        System.out.println("Total Percentage = " + percentage);
    }


}
