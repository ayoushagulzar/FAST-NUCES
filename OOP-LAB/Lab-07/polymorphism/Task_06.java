//Q6. Create a parent class Transport with method fare().
//Create subclasses:
// Bus
// Train
// Taxi
//Each class should override the fare() method and display different fare calculations.

package polymorphism;

class Transport {
    void fare() {
        System.out.println("Calculating fare...");
    }
}

class Bus extends Transport {
    double distance;
    Bus(double distance) {
        this.distance = distance;
    }

    @Override
    void fare() {
        double totalFare = distance * 8; // 8 per km
        System.out.println("Bus fare: " + totalFare);
    }
}

class Train extends Transport {
    double distance;
    int stops;
    Train(double distance, int stops) {
        this.distance = distance;
        this.stops = stops;
    }

    @Override
    void fare() {
        double totalFare = (distance * 5) + (stops * 20);
        System.out.println("Train fare: " + totalFare);
    }
}

class Taxi extends Transport {
    double distance;
    double baseFare;
    Taxi(double baseFare, double distance) {
        this.baseFare = baseFare;
        this.distance = distance;
    }

    @Override
    void fare() {

        double totalFare = baseFare + (distance * 30) + 200; //200 tax
        System.out.println("Taxi fare: " + totalFare);
    }
}

class MainTransport {
    public static void main(String[] args) {
        Transport t1 = new Bus(15);        // 15 km
        t1.fare();

        Transport t2 = new Train(100, 5);  // 100 km, 5 stops
        t2.fare();

        Transport t3 = new Taxi(50, 20);   // base 50, 20 km
        t3.fare();
    }
}
