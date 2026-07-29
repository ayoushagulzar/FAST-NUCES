import java.util.Scanner;

interface ElectricSystem {
    default void status() {
        System.out.println("Electric system: Battery at 80%, Mode: Eco");
    }
}

interface GPSSystem {
    default void status() {
        System.out.println("GPS system: Navigation ready, current location updated");
    }
}

abstract class Vehicle {
    abstract void startEngine();
}

class SmartVehicle extends Vehicle implements ElectricSystem, GPSSystem {

    private String startType;

    class Engine {
        void engineStatus() {
            System.out.println("Engine is running smoothly...");
        }
    }

    private Engine engine;

    SmartVehicle(String startType) {
        this.startType = startType;
        this.engine = new Engine();
    }

    @Override
    public void startEngine() {
        System.out.println("Starting vehicle using: " + startType);
        engine.engineStatus();
    }

    @Override
    public void status() {
        System.out.println("--- Vehicle Status ---");
        ElectricSystem.super.status();
        GPSSystem.super.status();
    }
}

class SmartVehicleApp {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Select start type for the vehicle:");
        System.out.println("1. Push Start");
        System.out.println("2. Remote Start");
        System.out.println("3. Key Turn Start");

        int choice = input.nextInt();
        String startType;

        switch(choice) {
            case 1: startType = "Push Start"; break;
            case 2: startType = "Remote Start"; break;
            case 3: startType = "Key Turn Start"; break;
            default:
                System.out.println("Invalid choice, defaulting to Push Start.");
                startType = "Push Start";
        }

        SmartVehicle myCar = new SmartVehicle(startType);
        myCar.startEngine();
        myCar.status();

        input.close();
    }
}