//Q3. A company has two types of employees:
//         Employee
//         PermanentEmployee
//The Employee class contains:
//         double salary
//         Method displaySalary()
//The PermanentEmployee class inherits Employee and contains:
//         Method calculateBonus() that calculates 10% bonus.
//The bonus must be displayed as an integer value using type casting.
//Write a Java program that:
//1. Creates a PermanentEmployee object.
//2. Displays salary.
//3. Calculates and prints the bonus after converting it to int

class Employee_{
    double salary;
    void setSalary(double salary){
        this.salary = salary;
    }
    void displaySalary(){
        System.out.println("Salary: " + salary);
    }
}

class PermanentEmployee extends Employee_{
    int calculateBonus(){
        return (int) (salary * 0.10);
    }
}

class Main_{
    public static void main(String[] args){
        PermanentEmployee PEmployee = new PermanentEmployee();
        PEmployee.setSalary(256908);
        PEmployee.displaySalary();
        System.out.println("Bonus: " + PEmployee.calculateBonus());
    }
}