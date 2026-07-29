//A bank has multiple branches. Each branch creates Account objects.
//Requirements:
//  1. Every account has accountNumber and balance.
//  2. Bank must track:
//      Total number of accounts (static variable)
//      Total bank balance (static variable)
//  3. Every time a new account is created:
//      Update total accounts
//      Add balance to total bank balance
//  4. Static method should display bank summary.

class Account{
    int accountNumber;
    double balance;
    static int total_accounts = 0;
    static double total_balance = 0;

    Account(int accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
        total_accounts ++;
        total_balance += balance;
    }

    void displayAccount(){
        System.out.println("Account Number: " + accountNumber + ", Balance: " + balance);
    }
    static void Summary(){
        System.out.println(" === Bank Summary ===");
        System.out.println("Total Accounts: " + total_accounts);
        System.out.println("Total Balance: " + total_balance);

    }
}

class account_main{
    public static void main(String[] args){
        Account acc1 = new Account(1234,67000);
        Account acc2 = new Account(1357,105000);
        Account acc3 = new Account(2468,208090);
        acc1.displayAccount();
        acc2.displayAccount();
        acc3.displayAccount();
        Account.Summary();

    }
}