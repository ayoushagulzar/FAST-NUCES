//Q7. A food delivery application allows customers to order food from different types of
//restaurants. Each restaurant calculates delivery charges differently.
//Create a parent class Restaurant with a method:
//calculateDeliveryFee(double distance)
//Create the following subclasses:
// FastFoodRestaurant
// FineDiningRestaurant
// CafeRestaurant
//Each subclass should override the calculateDeliveryFee() method using different
//formulas.
//Requirements:
// Use runtime polymorphism
// Create objects of different restaurant types using the Restaurant reference
// Display the delivery fee for each type of restaurant.

package polymorphism;

class Restaurant {
    void calculateDeliveryFee(double distance) {
        System.out.println("Calculating delivery fee...");
    }
}

class FastFoodRestaurant extends Restaurant {
    @Override
    void calculateDeliveryFee(double distance) {
        double fee = distance * 5; // rate = 5 per km
        System.out.println("Fast Food Restaurant delivery fee: " + fee);
    }
}

class FineDiningRestaurant extends Restaurant {
    @Override
    void calculateDeliveryFee(double distance) {
        // Base fee + extra charge per km
        double fee = 50 + (distance * 10);
        System.out.println("Fine Dining Restaurant delivery fee: " + fee);
    }
}


class CafeRestaurant extends Restaurant {
    double fee;
    @Override
    void calculateDeliveryFee(double distance) {
        if(distance > 15){
             fee = distance * 20;
        }
        else
            fee = distance * 12;
        System.out.println("Cafe Restaurant delivery fee: " + fee);
    }
}

class MainRestaurant {
    public static void main(String[] args) {
        Restaurant r1 = new FastFoodRestaurant();
        r1.calculateDeliveryFee(10);

        Restaurant r2 = new FineDiningRestaurant();
        r2.calculateDeliveryFee(10);

        Restaurant r3 = new CafeRestaurant();
        r3.calculateDeliveryFee(10);
    }
}
