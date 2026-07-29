//Q3. A bank system:
//       Creates a temporary fraud checker
//       Also assigns a one-time auditor
//Print:
//   Fraud check message
//   Auditor report

class Bank{

    void performFraudCheck() {
        class FraudChecker {  // local inner class, temporary
            void check() {
                System.out.println("Fraud check in progress...");
            }
        }
        FraudChecker fraud_checker = new FraudChecker();
        fraud_checker.check();
    }

    // Method to assign one-time auditor using anonymous inner class
    void assignAuditor() {
        Auditor auditor = new Auditor() {
            @Override
            public void generateReport() {
                System.out.println("Auditor report: All accounts verified successfully.");
            }
        };
        auditor.generateReport();
    }

    interface Auditor {
        void generateReport();
    }
}

class BankSystem_Main {
    public static void main(String[] args) {
        Bank bank = new Bank();
        bank.performFraudCheck();
        bank.assignAuditor();
    }
}
