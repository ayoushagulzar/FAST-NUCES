//Q9. An e-commerce platform manages orders.
//Each order must be processed, but processing differs by type.
//Orders can support:
//         Online Payment
//         Cash Payment
//Both provide a method to pay, but differently.
//Each order contains an internal Invoice module.


interface OnlinePayment {
    void payOnline(double amount);
}


interface CashPayment {
    void payCash(double amount);
}


interface Order {
    void processOrder(); // Every order must be processed
}

class PhysicalOrder implements Order, OnlinePayment, CashPayment {
    private Invoice invoice; // internal module

    public PhysicalOrder() {
        invoice = new Invoice();
    }

    @Override
    public void processOrder() {
        System.out.println("Processing physical order...");
    }

    @Override
    public void payOnline(double amount) {
        System.out.println("Paid " + amount + " online for physical order.");
    }

    @Override
    public void payCash(double amount) {
        System.out.println("Paid " + amount + " in cash for physical order.");
    }

    class Invoice {
        private double totalAmount;

        public void setAmount(double amount) {
            totalAmount = amount;
        }

        public double getAmount() {
            return totalAmount;
        }

        public void generateInvoice() {
            System.out.println("Invoice generated. Total: " + totalAmount);
        }
    }

    public Invoice getInvoice() {
        return invoice;
    }
}


class DigitalOrder implements Order, OnlinePayment {
    private Invoice invoice;

    public DigitalOrder() {
        invoice = new Invoice();
    }

    @Override
    public void processOrder() {
        System.out.println("Processing digital order...");
    }

    @Override
    public void payOnline(double amount) {
        System.out.println("Paid " + amount + " online for digital order.");
    }

    class Invoice {
        private double totalAmount;

        public void setAmount(double amount) {
            totalAmount = amount;
        }

        public double getAmount() {
            return totalAmount;
        }

        public void generateInvoice() {
            System.out.println("Invoice generated. Total: " + totalAmount);
        }
    }

    public Invoice getInvoice() {
        return invoice;
    }
}


class ECommercePlatform {
    public static void main(String[] args) {
        PhysicalOrder physicalOrder = new PhysicalOrder();
        physicalOrder.processOrder();
        physicalOrder.payCash(200);
        physicalOrder.getInvoice().setAmount(200);
        physicalOrder.getInvoice().generateInvoice();

        System.out.println();

        DigitalOrder digitalOrder = new DigitalOrder();
        digitalOrder.processOrder();
        digitalOrder.payOnline(100);
        digitalOrder.getInvoice().setAmount(100);
        digitalOrder.getInvoice().generateInvoice();
    }
}