//A university computer lab wants to keep track of computers installed in the lab. Each
//computer has a system ID, processor type, RAM size, and operating system. Write a Java
//program that creates a Computer class with appropriate data members and methods.
//Create objects inside the main() method to store information of different computers and
//display their details.

class Computer{
    int systemID;
    String processorType;
    int RAM_size;
    String operating_system;

    //default Constructor
    Computer(){
        systemID = 0;
        processorType = "Unknown";
        RAM_size = 0;
        operating_system= "Unknown";
    }
    //Parameterized Constructor
    Computer( int systemID,   String processorType,  int RAM_size,  String operating_system){
        this.systemID = systemID;
        this.processorType = processorType;
        this.RAM_size = RAM_size;
        this.operating_system = operating_system;
    }

    void display(){
        System.out.println("\n=== Computer Information ===");
        System.out.println("System ID: " + systemID);
        System.out.println("Processor Type: " + processorType);
        System.out.println("RAM size: " + RAM_size);
        System.out.println("Operating System: " + operating_system);
    }

    public static void main(String[] args) {
        Computer comp1 = new Computer(101, "Intel i5", 8, "Windows 10");
        Computer comp2 = new Computer(102, "AMD Ryzen 7", 16, "Ubuntu 22.04");

        comp1.display();
        comp2.display();
    }
}
