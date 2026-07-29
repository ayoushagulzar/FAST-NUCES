//Q4. Create a parent class Employee with method calculateSalary().
//Create subclasses:
// Manager
// Developer
// Intern
//Each subclass should override the method with different salary calculations.
package polymorphism;

class Employee {
    void calculateSalary() {
        System.out.println("Calculating Employee salary...");
    }
}


class Manager extends Employee {
    double baseSalary;
    double bonus;

    Manager(double baseSalary, double bonus) {
        this.baseSalary = baseSalary;
        this.bonus = bonus;
    }

    @Override
    void calculateSalary() {
        double total = baseSalary + bonus;
        System.out.println("Manager salary: " + total);
    }
}

class Developer extends Employee {
    double baseSalary;
    double overtime;

    Developer(double baseSalary, double overtime) {
        this.baseSalary = baseSalary;
        this.overtime = overtime;
    }

    @Override
    void calculateSalary() {
        double total = baseSalary + (overtime * 50);
        System.out.println("Developer salary: " + total);
    }
}

class Intern extends Employee {
    double stipend;

    Intern(double stipend) {
        this.stipend = stipend;
    }

    @Override
    void calculateSalary() {
        System.out.println("Intern salary: " + stipend);
    }
}

// Main class
class MainEmployee {
    public static void main(String[] args) {
        Employee emp1 = new Manager(80000, 20000);
        emp1.calculateSalary();

        Employee emp2 = new Developer(50000, 10); // 10 hours overtime
        emp2.calculateSalary();

        Employee emp3 = new Intern(15000);
        emp3.calculateSalary();
    }
}
