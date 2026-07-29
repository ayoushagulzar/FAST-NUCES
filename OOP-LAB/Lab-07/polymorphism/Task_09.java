//Q9. A ride-sharing application calculates the fare differently depending on the type of
//ride selected by the user.
//Create a parent class Ride with method:
//calculateFare(double distance)
//Create subclasses:
// BikeRide
// CarRide
// LuxuryRide
//Each subclass should override the method and calculate fare using different rates per
//kilometer.
//Requirements:
// Demonstrate runtime polymorphism
// Use a Ride reference variable
// Display fare for different ride types.
package polymorphism;

class Ride {
    void calculateFare(double distance) {
        System.out.println("Calculating fare...");
    }
}

class BikeRide extends Ride {
    @Override
    void calculateFare(double distance) {
        //10 per km
        double fare = distance * 10;
        System.out.println("Bike ride fare: " + fare);
    }
}

class CarRide extends Ride {
    @Override
    void calculateFare(double distance) {
        // 20 per km + 50 base fee
        double fare = 50 + (distance * 20);
        System.out.println("Car ride fare: " + fare);
    }
}

class LuxuryRide extends Ride {
    @Override
    void calculateFare(double distance) {
        // 50 per km + 100 base fee + 10% service charge
        double fare = (100 + (distance * 50)) * 1.10;
        System.out.println("Luxury ride fare: " + fare);
    }
}

class MainRide {
    public static void main(String[] args) {

        Ride[] rides = {
                new BikeRide(),
                new CarRide(),
                new LuxuryRide()
        };

        double distance = 15;

        for (Ride r : rides) {
            r.calculateFare(distance);
        }
    }
}
