//Write a program that reads a set of integers from 1 to 100, and then
//finds and prints the sum of the even and odd integers separately.

public class Task_02 {
    public static void main(String[] args){
        int number;
        int even_sum = 0;
        int odd_sum = 0;
        for (number = 1 ; number <= 100 ; number++){
            if(number%2==0)
                even_sum+=number;
            else
                odd_sum+=number;
        }
        System.out.println("Even Sum = " + even_sum);
        System.out.println("Odd Sum = " + odd_sum);
    }
}
