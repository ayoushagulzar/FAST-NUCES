//Q4. A banking system has three classes:
//        1. Account
//        2. SavingsAccount
//        3. PremiumSavings
//Relationships:
//         SavingsAccount inherits Account
//         PremiumSavings inherits SavingsAccount
//The Account class contains:
//double balance
//The PremiumSavings class calculates interest (7%).
//The final interest must be printed as an integer using casting.
class Account{
    double balance;
}

class SavingAccount extends Account{
   void setBalance(double balance){
        this.balance = balance;
    }
}

class PremiumSaving extends SavingAccount{
    static final double INTEREST_RATE = 0.07;
    int calculateInterest(){
        return (int)(INTEREST_RATE * balance);
    }
}

class MainClass_{
    public static void main(String[] args){
        PremiumSaving savings= new PremiumSaving();
        savings.setBalance(256090);
        System.out.println("Interest: " + savings.calculateInterest());
    }
}