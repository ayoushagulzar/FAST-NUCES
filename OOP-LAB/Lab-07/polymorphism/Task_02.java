//Q2. Create a class Shape with a method area().
//Create subclasses:
// Circle
// Rectangle
// Triangle
//Each subclass should override the area() method to calculate its specific area.
//Demonstrate dynamic method binding using a parent class reference.

package polymorphism;

class Shape{
    void area(){
        System.out.println("Calculating Shapes area: ");
    }
}
class Circle extends Shape{
    double radius;
    Circle(double radius){
        this.radius = radius;
    }
    @Override
    void area(){
        System.out.println("Area of circle: " + (Math.PI * radius * radius));
    }
}
class Rectangle extends Shape{
    double length , width;
    Rectangle(double length , double width){
        this.length = length;
        this.width = width;
    }
    @Override
    void area(){
        System.out.println("Area of rectangle: " + (length * width));
    }
}
class Triangle extends Shape{
    double length , width;
    Triangle(double length , double width){
        this.length = length;
        this.width = width;
    }
    @Override
    void area(){
        System.out.println("Area of triangle: " + ((length * width) / 2));
    }
}

class Main_{
    public static void main(String[] args){
        Shape shape1 = new Circle(4.23);
        shape1.area();
        Shape shape2 = new Rectangle(3.2 , 4.5);
        shape2.area();
        Shape shape3 = new Triangle(8.9 , 6.2);
        shape3.area();

    }
}