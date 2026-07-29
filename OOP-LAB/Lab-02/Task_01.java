//Your task is to design and implement an Invoice application in Java that will print the formatted
//invoice. Assume that you are designing this application to be used by a cashier at the POS (Point Of Sales).
// Your program starts by inputting items and their prices.
// It should then calculate the sub-total, tax, discount, and the final bill for a customer.
// Program will terminate if the user enters ’y’ or ’Y’.

//Here is a sample interaction:
//Enter items (first item’s name and then price):
//Chips 50
//Hand Wash 200
//Canned Almonds 125
//Pickle 145
//Apple juice 70

import java.util.Scanner;
public class Task_01 {
    public static void main(String[] args){
        int no_of_items;
        int subtotal;
        char choice;
        float discountPercent = 10.25f;
        float tax = 5;
        float totalBeforeTax;
        float InvoiceTotal;
        Scanner input = new Scanner(System.in);
        do{
            subtotal = 0;
            System.out.println("How many items have you purchased?");
            no_of_items = input.nextInt();
            input.nextLine(); //consumes new line

            String[] item = new String[no_of_items];
            int[] price = new int[no_of_items];

            for (int i = 0 ; i < no_of_items ; i++){
                System.out.println("Enter item " +(i+1) + " name: ");
                item[i]= input.nextLine();
                System.out.println("Enter item " +(i+1) + " price: ");
                price[i] = input.nextInt();
                input.nextLine();
                subtotal+=price[i];
            }
            float discountAmount = subtotal * (discountPercent/100);
            totalBeforeTax = subtotal - discountAmount;
            InvoiceTotal = totalBeforeTax + tax;

            System.out.println("\n=== Invoice ===");
            for (int i = 0; i < no_of_items; i++){
                System.out.println(item[i] + " - $" + price[i]);
            }
            System.out.println("================");
            System.out.println("Subtotal: $" + subtotal);
            System.out.println("Discount Percent: " + discountPercent);
            System.out.println("Discount Amount: $" + discountAmount);
            System.out.println("Total Before Tax: $" + totalBeforeTax);
            System.out.println("Sales Tax: $" + tax);
            System.out.println("Invoice Total: $" + InvoiceTotal);

            System.out.println("Do you want to continue?");
            choice = input.next().charAt(0);
        }while(choice == 'y' || choice == 'Y' );
        input.close();
    }

}
