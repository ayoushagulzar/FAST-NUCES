import java.util.Scanner;

public class input{
        public static void main(String[] args){
                int age;
                String name;
                boolean taskCompleted;

                Scanner sc = new Scanner(System.in);

                System.out.println("Enter your name: ");
                name = sc.next();

                System.out.println("Enter your age: ");
                age = sc.nextInt();

                System.out.println("Did you complete your work?");
                taskCompleted = sc.nextBoolean();
        }
}



