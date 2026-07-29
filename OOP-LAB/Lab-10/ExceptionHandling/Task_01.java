//You are building a program that calculates the average of a list of integers. Write a Java
//program that handles the following exceptions:
//         If the list is null or empty, the program should display an appropriate error
//        message.
//         If any of the integers in the list are not valid integers (i.e., they contain non-
//        numeric characters), the program should skip that integer and display only
//        numeric data’s average.
//         If the list contains only invalid integers (non – numeric), the program should
//        display an appropriate message.
//        Your program should use try-catch blocks to handle the exceptions. You can assume that
//        the list is provided as an argument.

package ExceptionHandling;

import java.util.*;
class AverageCalculator {

    public static void main(String[] args) {

        String[] list = {"10", "20", "abc", "30", "xyz"};

        if (list == null || list.length == 0) {
            System.out.println("Error: List is null or empty.");
            return;
        }

        int sum = 0;
        int count = 0;

        for (int i = 0; i < list.length; i++) {
            try {
                int num = Integer.parseInt(list[i]); // may throw exception
                sum += num;
                count++;
            } catch (NumberFormatException e) {
                System.out.println("Skipping invalid input: " + list[i]);
            }
        }

        if (count == 0) {
            System.out.println("Error: No valid integers found in the list.");
        } else {
            double average = (double) sum / count;
            System.out.println("Average of valid integers: " + average);
        }
    }
}