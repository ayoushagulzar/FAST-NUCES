//Q3. Create a class Payment with a method processPayment().
//Create subclasses:
// CreditCard
// DebitCard
// PayPal
//Override the method in each class to display different payment processing messages.

package polymorphism;

class Payment {
    void processPayment(){
        System.out.println("Payment in process");
    }
}

class CreditCard extends Payment {
    @Override
    void processPayment(){
        System.out.println("Credit Card Payment in process");
    }
}

class DebitCard extends Payment {
    @Override
    void processPayment(){
        System.out.println("Debit Card Payment in process");
    }
}

class PayPal extends Payment {
    @Override
    void processPayment(){
        System.out.println("PayPal Payment in process");
    }
}

class Processing {
    public static void main(String[] args){
        Payment payment1 = new CreditCard();
        payment1.processPayment();

        Payment payment2 = new DebitCard();
        payment2.processPayment();

        Payment payment3 = new PayPal();
        payment3.processPayment();
    }
}