//You are required to develop a program ProcessGrades to be used by the Examinations department.
// Your program should first prompt the user the number of students for whom she/he wishes
//to process grades.
// It should then read in a sequence of student numbers (note that loop has to be run for the
// number of students times, for example if user enters 10, then the program should read in
//number for 10 students) and computes the average, the number of students who pass (who
//obtain marks above or equals to 60) and the number of students who fail.
// Finally, it should display all information.

import java.util.Scanner;
public class Task_04{

    public static void main(String[] args){
        int no_of_students;
        float marks;
        float sum = 0.0f;
        float average = 0.0f;
        int pass_students = 0;
        int fail_students = 0;

        Scanner input = new Scanner(System.in);
        System.out.println("Enter no: of students: ");
        no_of_students = input.nextInt();

        for (int i = 0 ; i < no_of_students; i++){
            System.out.println("Enter marks of Student " + (i+1));
            marks = input.nextFloat();
            sum+=marks;

            if (marks >= 60)
                pass_students++;
            else fail_students++;
        }

        average = sum/no_of_students;
        System.out.println("=== Grades Report ===");
        System.out.println("No: of Students: " + no_of_students);
        System.out.printf("Marks Average: %.2f\n" , average);
        System.out.println("Pass Students: " + pass_students);
        System.out.println("Fail Students: " + fail_students);
    }
}
