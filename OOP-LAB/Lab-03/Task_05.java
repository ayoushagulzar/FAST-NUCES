//An online coding platform wants to store information about programmers using the
//platform. Each programmer has an ID, name, preferred programming language, and number
//of problems solved. Write a Java program that creates a Programmer class and methods to
//update solved problems and display programmer details. Create objects in the main()
//method and test the functionality

class Programmer{
    int ID;
    String name;
    String program_lang;
    int solved_problems;

    //default Constructor
    Programmer(){
        ID = 0;
        name = "Unknown";
        program_lang= "Unknown";
        solved_problems = 0;
    }
    //Parameterized Constructor
    Programmer( int ID,   String name, String program_lang , int solved_problems){
        this.ID = ID;
        this.name = name;
        this.program_lang= program_lang;
        this.solved_problems = solved_problems;
    }
    void updateSolvedProblems(int newProblems){
        solved_problems+=newProblems;
    }
    void display(){
        System.out.println("\n=== Programmer Information ===");
        System.out.println("ID: " + ID);
        System.out.println("Name: " + name);
        System.out.println("Programming Language: " + program_lang);
        System.out.println("No: of solved problems: " + solved_problems);
    }

    public static void main(String[] args) {
        Programmer prog1 = new Programmer(1, "Alice", "Java", 10);
        Programmer prog2 = new Programmer(2, "Bob", "Python", 5);

        prog1.updateSolvedProblems(3);
        prog2.updateSolvedProblems(5);

        prog1.display();
        prog2.display();
    }
}
