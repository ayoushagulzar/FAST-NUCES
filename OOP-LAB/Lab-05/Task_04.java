//Store student objects dynamically. Each student has name and GPA.
//Requirements:
//        1. Add at least 5 students.
//        2. Remove students with GPA below 2.0.
//        3. Find topper student.
//        4. Count students eligible for Dean’s List (GPA &gt; 3.5)

import java.util.ArrayList;

class Student{
    String name;
    float gpa;

    Student(String name, float gpa) {
        this.name = name;
        this.gpa = gpa;
    }
}

class Main{
    public static void main(String[] args) {
        ArrayList<Student> students_list = new ArrayList<>();

        //Add students
        students_list.add(new Student("Ali", 3.8f));
        students_list.add(new Student("Sara", 3.2f));
        students_list.add(new Student("Taha", 1.9f));
        students_list.add(new Student("Hadi", 3.6f));
        students_list.add(new Student("Batool", 2.5f));
        students_list.add(new Student("Ayesha", 1.7f));

        //Remove students with GPA below 2.0
        students_list.removeIf(student -> student.gpa < 2.0);

        //Find topper
        Student topper = students_list.get(0); // assume first student is topper
        for (Student s : students_list) {
            if (s.gpa > topper.gpa) {
                topper = s;
            }
        }
        System.out.println("Topper: " + topper.name + " with GPA " + topper.gpa);

        // students eligible for Dean's List
        int deansCount = 0;
        for (Student s : students_list) {
            if (s.gpa > 3.5) {
                deansCount++;
            }
        }
        System.out.println("Students eligible for Dean's List: " + deansCount);
    }
}