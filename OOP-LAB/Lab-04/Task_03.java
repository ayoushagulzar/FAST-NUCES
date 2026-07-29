// 3. Write a Java program for a Mobile class that:
//  Assigns default values when no data is passed
//  Reuses constructor logic using constructor chaining
//  Avoids duplicate initialization code

class Mobile {
    String brand;
    String model;
    double price;

    Mobile() {
        this("Unknown", "Unknown", 0);
    }

    Mobile(String b) {
        this(b, "Default Model", 1000);
    }

    Mobile(String b, String m, double p) {
        brand = b;
        model = m;
        price = p;
    }

    void display() {
        System.out.println("Brand: " + brand + ", Model: " + model + ", Price: " + price);
    }

    public static void main(String[] args) {
        Mobile phone1 = new Mobile();
        Mobile phone2 = new Mobile("Samsung");
        Mobile phone3 = new Mobile("Apple", "iPhone 14", 1200);

        phone1.display();
        phone2.display();
        phone3.display();
    }
}