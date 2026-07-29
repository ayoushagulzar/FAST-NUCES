//1. An e-commerce platform allows customers to pay for their orders using different
//payment methods such as Credit Card, PayPal, and Bank Transfer. Although the
//internal payment process for each method may differ, every payment method must
//provide a functionality to process the payment.
//Design a program where each payment method implements the same capability of
//processing payments.
//Task:
//a. Create an interface named Payment.
//b. The interface should contain a method processPayment().
//c. Create three classes:
//      i. CreditCard
//      ii. PayPal
//      iii. BankTransfer
//d. Each class should implement the interface and print a message indicating
//the payment method used.

interface Payment{
    void processPayment();
}
class CreditCard implements Payment{
    public void processPayment() {
        System.out.println("Processing payment via Credit Card.");
    }
}
class PayPal implements Payment{
    public void processPayment() {
        System.out.println("Processing payment via PayPal.");
    }
}
class BankTransfer implements Payment{
    public void processPayment() {
        System.out.println("Processing payment via Bank.");
    }
}

class PaymentMain{
    public static void main(String[] args){
        Payment[] payments = {
                new CreditCard(),
                new PayPal(),
                new BankTransfer(),
        };

        for (Payment p : payments){
            p.processPayment();
        }
    }
}