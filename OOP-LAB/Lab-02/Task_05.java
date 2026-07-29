//Create a menu driven transactions’ processing unit in a bank as long as user enters correct
//input. Initially, take the username and password as input from user. If that username and
//password is correct then the user will log in to the system and can perform any transaction as
//
//Main Menu ** Welcome to Bank of Pakistan**
//1. Deposit Money
//2. Withdraw Amount
//3. Account status
//Select your choice:
// (After completing the selected transaction) Do you want to continue? [y/Y]
// (goes to Main Menu, if y/Y is pressed)
//Depending upon the user’s choice, perform the transaction and display the remaining account
//balance along with the owner’s username.

import java.util.Scanner;
public class Task_05 {
    public static void main(String[] args){
        String name = "Ayousha Gulzar";
        String password = "fastnuces25";
        float bankBalance = 500256.789f;

        int choice;
        String userName;
        String userPassword;
        float amount;
        char CHOICE;
        Scanner input = new Scanner(System.in);

        System.out.println("Enter your name: ");
        userName = input.nextLine();
        System.out.println("Enter password: ");
        userPassword = input.nextLine();

        if(userName.equalsIgnoreCase(name) && userPassword.equalsIgnoreCase(password)){
            System.out.println("You have been logged in successfully!\n");
            do{
                System.out.println("=== Main Menu ===");
                System.out.println("1. Deposit Money");
                System.out.println("2. Withdraw Amount");
                System.out.println("3. Account status");
                System.out.println("Enter your choice: ");
                choice = input.nextInt();
                input.nextLine();

                switch (choice){
                    case 1: System.out.println("Enter an amount you want to deposite: ");
                        amount = input.nextFloat();
                        bankBalance+=amount;
                        System.out.println("Money deposited successfully!");
                        System.out.printf("Your new amount is RsA %.2f\n", bankBalance);
                        break;

                    case 2: System.out.println("Enter an amount you want to withdraw: ");
                        amount = input.nextFloat();
                        if(amount <= bankBalance){
                            bankBalance -= amount;
                            System.out.println("Money withdrawn successfully!");
                            System.out.printf("Remaining Balance: Rs %.2f\n", bankBalance);
                        }
                        else{
                            System.out.println("Insufficient balance!");
                        }
                        break;

                    case 3:
                        System.out.println("=== Account Status ===");
                        System.out.println("Account Holder: " + userName);
                        System.out.printf("Current Balance: Rs %.2f\n", bankBalance);
                        break;
                    default: System.out.println("Invalid input!");
                        break;
                }
                System.out.println("Do you want to continue?");
                CHOICE = input.next().charAt(0);
            }while(CHOICE == 'Y' || CHOICE == 'y');
        }
        else  System.out.println("Invalid username or password!");
    }
}
