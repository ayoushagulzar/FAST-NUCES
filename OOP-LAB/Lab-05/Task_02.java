//A hospital records temperatures of 5 patients for 7 days.
//Requirements:
//        1. Store temperatures in a 2D array.
//        2. Calculate average temperature of each patient.
//        3. Identify which patient had the highest overall weekly average.
//        4. Count how many times temperature exceeded 100°F.
//        5. Replace any temperature below 95°F with 95 (equipment correction).

import java.util.Scanner;
class Temp{
    public static void main(String[] args){
        float[][]  temp= new float[5][7];
        float[] average = new float[5];
        int temp_exceed = 0;
        Scanner sc = new Scanner(System.in);

        for(int i = 0; i < 5 ; i++){
            System.out.println("Patient " + (i+1));
            float sum = 0.0f;
            for (int j = 0; j < 7; j++){
                System.out.println("Day " + (j+1));
                System.out.println("Enter temperature (in Fahrenheit): ");
                temp[i][j] = sc.nextFloat();
                if (temp[i][j] < 95){
                    temp[i][j] = 95;
                }
                sum+=temp[i][j];
                if(temp[i][j] > 100) temp_exceed++;
            }
            average[i] = sum/7;
        }
        int maxPatient = 0;
        float max_avg = average[0];

        System.out.println(" === Patients Weekly Temperature Info === ");
        for(int i = 0; i < 5 ; i++){
            System.out.printf("Patient %d Average Temperature: %.2f\n" ,  (i+1) , average[i]);
                if(average[i]> max_avg){
                    maxPatient = i;
                    max_avg = average[i];
                }
            }
        System.out.println("Patient with highest average temperature: Patient " + (maxPatient + 1));
        System.out.println("Temperature exceeded 100°F " + temp_exceed + " times.");

        }

    }

