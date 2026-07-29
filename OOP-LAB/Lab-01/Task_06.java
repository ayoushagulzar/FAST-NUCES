// Write a Java program that takes as input your name, student ID, current courses
// registered for and displays all the information.

import java.util.Scanner;

public class Task_06 {
    public static void main(String[] args){
        String name;
        int studentId;
        int no_of_courses;

        Scanner input = new Scanner (System.in);

        System.out.println("Enter your student Id: ");
        studentId = input.nextInt();
        input.nextLine();
        System.out.println("Enter your name: ");
        name = input.nextLine();
        System.out.println("Enter your no of courses: ");
        no_of_courses = input.nextInt();
        input.nextLine();
        String[] courses = new String[no_of_courses];
        System.out.println("Enter your courses name: ");
        for(int i = 0 ; i < no_of_courses ; i++){
            courses[i] = input.next();
        }

        System.out.println("=== Student Info ===");
        System.out.println("Name : " + name);
        System.out.println("Student ID : " + studentId);
        System.out.println("Courses currently registered : ");
        for(int i = 0 ; i < no_of_courses ; i++){
            System.out.println(courses[i]);
        }
    }
}
