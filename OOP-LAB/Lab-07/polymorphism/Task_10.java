//Q10. An online learning platform calculates final grades differently for different types of
//courses.
//Create a parent class Course with method:
//calculateGrade(int assignments, int exams)
//Create subclasses:
// ProgrammingCourse
// MathematicsCourse
// DesignCourse
//Each subclass should override the calculateGrade() method using different grading
//formulas.
//Requirements:
// Demonstrate runtime polymorphism
// Use a parent class reference to call child class implementations.

package polymorphism;


class Course {
    void calculateGrade(int assignments, int exams) {
        System.out.println("Calculating grade...");
    }
}

// ProgrammingCourse: assignments 40%, exams 60%
class ProgrammingCourse extends Course {
    @Override
    void calculateGrade(int assignments, int exams) {
        double grade = (assignments * 0.4) + (exams * 0.6);
        System.out.println("Programming Course final grade: " + grade);
    }
}

// MathematicsCourse: assignments 30%, exams 70%
class MathematicsCourse extends Course {
    @Override
    void calculateGrade(int assignments, int exams) {
        double grade = (assignments * 0.3) + (exams * 0.7);
        System.out.println("Mathematics Course final grade: " + grade);
    }
}

// DesignCourse: assignments 50%, exams 50%
class DesignCourse extends Course {
    @Override
    void calculateGrade(int assignments, int exams) {
        double grade = (assignments * 0.5) + (exams * 0.5);
        System.out.println("Design Course final grade: " + grade);
    }
}

class MainCourse {
    public static void main(String[] args) {

        Course[] courses = {
                new ProgrammingCourse(),
                new MathematicsCourse(),
                new DesignCourse()
        };

        int assignments = 80;
        int exams = 90;

        for (Course c : courses) {
            c.calculateGrade(assignments, exams);
        }
    }
}