abstract class ATM {

    abstract void withdraw();

    void balanceInquiry() {
        System.out.println("Checking balance...");
    }
}

class UBL extends ATM {
    @Override
    void withdraw() {
        System.out.println("UBL: Withdraw with 20 rupees charges.");
    }
}

class MCB extends ATM {
    @Override
    void withdraw() {
        System.out.println("MCB: Withdraw with 10 rupees charges.");
    }
}

class Meezan extends ATM {
    @Override
    void withdraw() {
        System.out.println("Meezan: Withdraw without charges.");
    }
}

class HBL extends ATM {
    @Override
    void withdraw() {
        System.out.println("HBL: Withdraw with 15 rupees charges.");
    }
}

class Main{
    ATM[] a = {
            new HBL(),
            new MCB(),
            new Meezan(),
            new UBL()
    };

}