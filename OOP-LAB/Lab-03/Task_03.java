//A college wants to manage course information. Each course has a course code, course
//name, and credit hours. Write a Java program that creates a Course class with appropriate
//data members and a method to display course details. Create at least two course objects
//inside the main() method and call the display method using those objects.

class Course{
    String course_code;
    String course_name;
    int credit_hours;

    //default Constructor
    Course(){
        course_code = "Unknown";
        course_name = "Unknown";
        credit_hours= 0;
    }
    //Parameterized Constructor
    Course( String course_code,  String course_name,  int credit_hours){
        this.course_code = course_code;
        this.course_name = course_name;
        this.credit_hours=credit_hours;
    }

    void display(){
        System.out.println("\n=== Course Information ===");
        System.out.println("Course code: " + course_code);
        System.out.println("Course Name: " + course_name);
        System.out.println("Credit Hours: " + credit_hours);
    }

    public static void main(String[] args){
        Course course1 = new Course("PF101" , "Programming Fundamental" , 3);
        Course course2 = new Course("EW102" , "Expository Writting" , 2);
        course1.display();
        course2.display();
    }
}
