//3. A graphics application calculates the area of different shapes such as Circle and Rectangle.
//Each shape has its own formula for calculating area.

interface Shape{
    double area();
}

class Circle implements Shape{
    double radius;
    Circle(double radius){
        this.radius = radius;
    }
    public double area(){
        return Math.PI * radius * radius;
    }
}

class Rectangle implements Shape{
    double length;
    double width;
    Rectangle(double length , double width){
        this.length = length;
        this.width = width;
    }
    public double area(){
        return length * width;
    }
}

class Shapes_Main{
    public static void main(String[] args){
        Shape[] shapes = {
                 new Circle(3.2),
                 new Rectangle(4.5, 2.8)
        };

        for (Shape s: shapes){
           System.out.println("Area: " + s.area());
        }
    }
}