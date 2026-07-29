// Write a Java program that inputs from the user the radius of a circle as an integer
// and prints the circle’s diameter, circumference and area using the floating-point
// value 3.14159 for π.

import java.util.Scanner;

public class Task_05 {
    public static void main(String [] args){
       float radius;
       final float PI = 3.14159f;

       Scanner input = new Scanner (System.in);

       System.out.println("Enter radius of the circle: ");
       radius = input.nextFloat();

       float diameter = 2 * radius;
       float circumference = 2*PI*radius;
       float area = PI * radius * radius;

       System.out.printf("Diameter = %.2f\n" , diameter);
       System.out.printf("Circumference =  %.2f\n" , circumference);
       System.out.printf("Area =  %.2f\n" , area);

       input.close();
    }
}
