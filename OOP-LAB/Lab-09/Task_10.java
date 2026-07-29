//Q10. A university system manages courses.
//Each course must be started, but behavior differs.
//Courses may support:
//       Assignments
//       Quizzes
//For special cases, a guest instructor is assigned for one-time teaching.

interface Course_ {
    void startCourse();
}

interface Assignments {
    void submitAssignment(String assignment);
}

interface Quizzes {
    void takeQuiz(String quiz);
}

class RegularCourse implements Course_, Assignments, Quizzes {
    private CourseMaterial material;

    public RegularCourse() {
        material = new CourseMaterial();
    }

    @Override
    public void startCourse() {
        System.out.println("Starting regular course...");
    }

    @Override
    public void submitAssignment(String assignment) {
        System.out.println("Assignment submitted: " + assignment);
    }

    @Override
    public void takeQuiz(String quiz) {
        System.out.println("Quiz taken: " + quiz);
    }

    // Nested class for course materials
    class CourseMaterial {
        private String content;

        public void setContent(String content) {
            this.content = content;
        }

        public String getContent() {
            return content;
        }
    }

    public CourseMaterial getMaterial() {
        return material;
    }
}

class SpecialCourse implements Course_ {
    private String guestInstructor;

    public SpecialCourse(String guestInstructor) {
        this.guestInstructor = guestInstructor;
    }

    @Override
    public void startCourse() {
        System.out.println("Starting special course with guest instructor: " + guestInstructor);
    }
}

class UniversitySystem {
    public static void main(String[] args) {
        RegularCourse javaCourse = new RegularCourse();
        javaCourse.startCourse();
        javaCourse.submitAssignment("OOP Assignment 1");
        javaCourse.takeQuiz("Quiz 1");
        javaCourse.getMaterial().setContent("Java basics, OOP concepts");
        System.out.println("Course material: " + javaCourse.getMaterial().getContent());

        System.out.println();

        SpecialCourse guestCourse = new SpecialCourse("Dr. Ahmed");
        guestCourse.startCourse();
    }
}