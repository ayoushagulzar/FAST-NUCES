//Q5. Create a class Animal with method sound().
//Create subclasses:
//       Dog
//       Cat
//Each class overrides sound().
//In the main method:
//      1. Store objects of Dog and Cat in Animal references.
//      2. Call sound().

class Animal{
    void sound(){
        System.out.println("Animal makes sound.");
    }
}
class Dog extends Animal{
    @Override
    void sound(){
        System.out.println("Dog barks.");
    }
}
class Cat extends Animal{
    @Override
    void sound(){
        System.out.println("Cat meows.");
    }
}
class MAIN{
   public static void main(String[] args){
       Animal animal = new Dog();
       animal.sound();
       Animal animal1 = new Cat();
       animal1.sound();
    }
}
