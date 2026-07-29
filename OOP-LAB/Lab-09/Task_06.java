//Q6. An IoT device:
//       Has default method update()
//       Also has static method info()
//Use both correctly

interface IoTDevice {
    default void update() {
        System.out.println("Updating generic IoT device firmware...");
    }

    static void info() {
        System.out.println("IoT Device v1.0 - Smart Connectivity Enabled");
    }
}

class SmartSensor implements IoTDevice {
    @Override
    public void update() {
        System.out.println("Smart Sensor: Firmware updated successfully!");
    }
}

class IoTApp {
    public static void main(String[] args) {
        IoTDevice.info();

        SmartSensor sensor = new SmartSensor();
        sensor.update();

        // Anonymous class for one-off IoT device
        IoTDevice tempDevice = new IoTDevice() {
            @Override
            public void update() {
                System.out.println("Temporary IoT device: Quick update done!");
            }
        };
        tempDevice.update();
    }
}