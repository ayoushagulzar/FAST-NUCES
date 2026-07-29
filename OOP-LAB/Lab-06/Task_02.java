//Q2. A university system contains three levels of classes:
//1. Person
//2. Student
//3. GraduateStudent
//Relationships:
//        Student inherits Person
//        GraduateStudent inherits Student
//Each class contains a method:
//        Person → displayPerson()
//        Student → displayStudent()
//        GraduateStudent → research()
//Write a program that creates a GraduateStudent object and calls all methods.

class Person{
    void displayPerson(){
        System.out.println("I am a person.");
    }
}

class Student extends Person{
    void displayStudent(){
        System.out.println("I am a student.");
    }
}

class GraduateStudent extends Student{
    void research(){
        System.out.println("I am a graduate student and I do research.");
    }
}

class MainClass{
   public static void main(String[] args){
       GraduateStudent st1 = new GraduateStudent();
       st1.displayPerson();;
       st1.displayStudent();
       st1.research();
    }
}
