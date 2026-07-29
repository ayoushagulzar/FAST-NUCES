class Outer {

    // 01- nested inner class
    class NestedInner {
        void nested_display() {
            System.out.println("This is nested inner class.");
        }
    }

    // 02- Method-local inner class
    void method() {

        class MethodLocal {
            void method_display() {
                System.out.println("This is method local class.");
            }
        }

        MethodLocal obj = new MethodLocal();
        obj.method_display();
    }

    // 03- Static Nested inner class
    static class StaticNested {
        void static_Display() {
            System.out.println("This is static nested class.");
        }
    }

    // Method for anonymous class
    void anonymousDemo() {
        Anonymous obj = new Anonymous() {
            void anonymous_display() {
                System.out.println("This is anonymous class.");
            }
        };

        obj.anonymous_display();
    }
}

// Base abstract class
abstract class Anonymous {
    abstract void anonymous_display();
}

class Main {
    public static void main(String[] args) {

        // Inner class
        Outer outer = new Outer();
        Outer.NestedInner ni = outer.new NestedInner();
        ni.nested_display();

        // Method local class
        outer.method();

        // Static nested class
        Outer.StaticNested sn = new Outer.StaticNested();
        sn.static_Display();

        // Anonymous class
        outer.anonymousDemo();
    }
}