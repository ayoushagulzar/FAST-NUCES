//A university has the marks of 12 students stored in an array. The university wants to grant
//scholarships based on the following rules:
//1. Calculate the class average.
//2. Students scoring:
//   Above 85 → Full Scholarship
//   Between 70 and 85 → Half Scholarship
//   Below 70 → No Scholarship
//3. Count how many students fall into each category.
//4. Identify how many students scored below class average.
//5. Replace any mark below 40 with 40 (grace marks policy).
//Write a program to implement the above system.

import java.util.Scanner;
class Students_Marks{
    public static void main(String[] args){
        float[] marks = new float[12];
        float sum = 0.0f;
        float average;
        int full_Scholarship = 0;
        int half_scholarship = 0;
        int no_scholarship = 0;
        int below_avg = 0;

        Scanner sc = new Scanner(System.in);
        for(int i = 0 ; i < 12 ; i++){
            System.out.println("Enter marks of Student " + (i+1) + ": ");
            marks[i] = sc.nextFloat();
            if(marks[i] < 40){
                marks[i] = 40;
            }
            sum+=marks[i];
            if(marks[i] > 85) full_Scholarship++;
            else if(marks[i]>=70 && marks[i]<=85) half_scholarship++;
            else no_scholarship++;
        }
        average = sum/12;
        for(int i = 0 ; i < 12 ; i++){
                if(marks[i] < average) below_avg++;
            }

        System.out.println("=== Students Marks & Scholarship Information ===");
        System.out.println("Full Scholarship Students: " + full_Scholarship);
        System.out.println("Half Scholarship Students: " + half_scholarship);
        System.out.println("No Scholarship Students: " + no_scholarship);
        System.out.println("Class Average: " + average);
        System.out.println("Students Below Average: " + below_avg);
        }
    }
