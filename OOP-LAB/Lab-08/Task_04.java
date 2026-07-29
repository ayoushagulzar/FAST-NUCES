//An online learning system has different types of users such as Student and Instructor. All
//users must be able to login, but instructors also have the ability to upload courses.

interface User{
    void login();
}

class Student implements User{
    public void login(){
        System.out.println("Student logged in.");
    }
}

class Instructor implements User{
    public void login(){
        System.out.println("Instructor logged in.");
    }
    void uploadCourse() {
        System.out.println("Instructor uploaded a course.");
    }
}

class User_Main{
    public static void main(String[] args){
        User[] users = {
                new Student(),
                new Instructor()
        };

        for (User u: users){
           u.login();

           if(u instanceof Instructor){
               ((Instructor) u).uploadCourse();
           }
        }

    }
}