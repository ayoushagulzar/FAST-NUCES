// 2. Write a Java program where an Employee object is passed to another
// constructor to create a safe duplicate. Changes in the duplicate object must
// not affect the original object.

class Employee {
    String name;
    int salary;

    Employee(String n, int s) {
        name = n;
        salary = s;
    }

    Employee(Employee e) {
        name = e.name;
        salary = e.salary;
    }

    void display() {
        System.out.println("Name: " + name + ", Salary: " + salary);
    }

    public static void main(String[] args) {
        Employee original = new Employee("Alice", 50000);
        Employee duplicate = new Employee(original);

        duplicate.name = "Bob";
        duplicate.salary = 60000;

        original.display();
        duplicate.display();
    }
}