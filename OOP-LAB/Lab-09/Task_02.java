//Q2. An online learning platform is being developed where different types of courses are offered.
//Some courses are pre-recorded, allowing students to watch videos anytime, while others are conducted
//as live sessions. In certain cases, a course may combine both approaches.
//Each type of course provides a way to play video content, but the behavior may differ depending on
//whether the course is recorded or live.
//
//The platform also requires that every course must have a way to start the course session, but the exact
//implementation depends on the specific course type.
//Design a system to represent such a hybrid course that combines both recorded and live functionalities.

import java.util.Scanner;

interface RecordedClass{
    default void playVideoContent(){
        System.out.println("Pre Recorded Lecture playing");
    }
}
interface LiveSession{
    default void playVideoContent(){
        System.out.println("Live Session starting");
    }
}
abstract class Course{
    abstract void startSession();
}
class Recorded extends Course implements RecordedClass,LiveSession{
    @Override
    public void startSession(){
        System.out.println("Click the link to play recorded video.");
    }
    @Override
    public void playVideoContent() {
        RecordedClass.super.playVideoContent();
    }
}
class Live extends Course implements RecordedClass,LiveSession{
    @Override
    public void startSession(){
        System.out.println("Click the link join the live session.");
    }
    @Override
    public void playVideoContent() {
        LiveSession.super.playVideoContent();
    }
}
class Hybrid extends Course implements RecordedClass,LiveSession{
    @Override
    public void startSession(){
        System.out.println("Starting Hybrid Course Session");
    }

    @Override
    public void playVideoContent() {
        RecordedClass.super.playVideoContent();
        LiveSession.super.playVideoContent();
    }
}

class OnlineClass_Main {
    public static void main(String[] args) {
        int choice;
        char charChoice;
        Scanner input = new Scanner(System.in);
        do {
            System.out.println();
            System.out.println("Which Session do you want to start?");
            System.out.println("1.Recorded Session");
            System.out.println("2.Live Session");
            System.out.println("3.Hybrid Session");
            System.out.println("Enter your choice: ");
            choice = input.nextInt();
            switch (choice) {
                case 1:
                    Recorded r1 = new Recorded();
                    r1.startSession();
                    r1.playVideoContent();
                    break;
                case 2:
                    Live live = new Live();
                    live.startSession();
                    live.playVideoContent();
                    break;
                case 3:
                    Hybrid h1 = new Hybrid();
                    h1.startSession();
                    h1.playVideoContent();
                    break;
                default:
                    System.out.println("Invalid choice!");
                    System.out.println("Exiting....");
            }
            System.out.println();
            System.out.println("Do you want to continue?");
            input.nextLine();
            charChoice = input.nextLine().charAt(0);
        }while (Character.toLowerCase(charChoice) == 'y');
    }
}