//Q1. Create a parent class Animal with a method makeSound().
//Create child classes:
//   Dog
//   Cat
//   Cow
//Each class should override the makeSound() method.
//Write a Java program to demonstrate runtime polymorphism.
package polymorphism;

class Animal{
    void makeSound(){
        System.out.println("Animal makes sound.");
    }
}
class Dog extends Animal{
    @Override
    void makeSound(){
        System.out.println("Dog barks.");
    }
}
class Cat extends Animal{
    @Override
    void makeSound(){
        System.out.println("Cat meows.");
    }
}
class Cow extends Animal{
    @Override
    void makeSound(){
        System.out.println("Cow moos.");
    }
}

class Main{
    public static void main(String[] args){
    Animal animal = new Animal();
    animal.makeSound();
    Dog dog = new Dog();
    dog.makeSound();
    Cat cat = new Cat();
    cat.makeSound();
    Cow cow = new Cow();
    cow.makeSound();
    }
}