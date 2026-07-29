//     ====== TASK 01 =====
//A bank wants to initialize customer accounts at the time of account creation.
//Each account has:
// Account number
// Account holder name
// Initial balance
//Task:
//1. Create a class BankAccount.
//2. Use a constructor to assign initial values.
//3. Create one account with balance and one without balance (default balance = 0).
//4. Display account details.

class BankAccount{
    int account_number;
    String accountHolder_name;
    float initialBalance;

    //default constructor
    BankAccount(){
        account_number = 12345;
        accountHolder_name = "Ali";
        initialBalance = 0f;
    }
    //parametrized constructor
    BankAccount(int account_number, String accountHolder_name, float initialBalance){
        this.account_number = account_number;
        this.accountHolder_name = accountHolder_name;
        this.initialBalance = initialBalance;
    }
    public void display(){
        System.out.println("\n--- Account Details ---");
        System.out.println("Account no: " + account_number);
        System.out.println("Account holder Name: " + accountHolder_name);
        System.out.println("Initial Balance: Rs " + initialBalance);
    }
}

class Main{

    public static void main(String[] args){
        BankAccount account1 = new BankAccount();
        BankAccount account2 = new BankAccount(78912 , "Asad" , 506789.345f);
        account1.display();
        account2.display();
    }
}