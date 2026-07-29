//Q1. A company wants to design a simple employee management system.
//         There is a Parent class called Employee.
//         It contains a method work() that displays a message.
//         A Child class called Manager inherits from Employee.
//         The Manager class has an additional method manageTeam().
//Write a Java program that creates a Manager object and calls both methods.

class Employee{
    void work(){
        System.out.println("I am Employee and I work in ABC company");
    }
}

class Manager extends Employee{
    void manageTeam(){
        System.out.println("I manage teams");
    }
}

class Main{
    public static void main(String[] args){
        Manager manager = new Manager();
        manager.work();
        manager.manageTeam();
    }
}