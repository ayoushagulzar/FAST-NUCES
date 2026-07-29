//A mobile phone store wants to record phone details when new phones arrive. Each phone
//has a brand name, model, and price. Write a Java program that creates a Mobile class. Use a
//no-argument constructor to assign default values and a parameterized constructor to assign
//actual values. Create objects using both constructors inside the main() method and display
//phone information.

class Mobile {
    String BrandName;
    String Model;
    float price;

    //default Constructor
    Mobile(){
      BrandName = "Unknown";
      Model = "Unknown";
      price = 0f;
    }
    //Parameterized Constructor
    Mobile(String BrandName, String Model, float price){
        this.BrandName = BrandName;
        this.Model = Model;
        this.price =price;
    }

    void display(){
        System.out.println("\n=== Phone Information ===");
        System.out.println("Brand Name: " + BrandName);
        System.out.println("Model: " + Model);
        System.out.println("Price: " + price);
    }

    public static void main(String[] args){
        Mobile phone1 = new Mobile();
        Mobile phone2 = new Mobile("Oppo" , "A6 pro" , 250000f);
        phone1.display();
        phone2.display();
    }
}
