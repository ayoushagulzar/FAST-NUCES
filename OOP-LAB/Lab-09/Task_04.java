//Q4. A ride app supports:
//       GPS tracking
//       Payment system
//       Company rules (static inner class)
//Create class Ride implementing both interfaces

interface GPS {
    void trackLocation();
}

interface Payment {
    void processPayment();
}

class Ride implements GPS, Payment {

    @Override
    public void trackLocation() {
        System.out.println("Tracking ride location via GPS...");
    }

    @Override
    public void processPayment(){
        System.out.println("Processing payment for the ride...");
    }

    // Static inner class for company rules
    static class CompanyRules {
        static void displayRules() {
            System.out.println("Company Rules:");
            System.out.println("1. Always wear a seatbelt.");
            System.out.println("2. Follow traffic laws.");
            System.out.println("3. Maintain hygiene in the vehicle.");
        }
    }
}

class RideApp_Main {
    public static void main(String[] args) {
        Ride ride = new Ride();
        ride.trackLocation();
        ride.processPayment();
        Ride.CompanyRules.displayRules();
    }
}