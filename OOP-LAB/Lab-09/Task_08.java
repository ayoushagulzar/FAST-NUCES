//Q8. A smart home system controls different appliances.
//Each appliance must have a way to turn on, but the behavior may differ.
//Appliances can support:
//       Voice Control
//       Remote Control
//Both provide a method to execute a command, but differently.
//A device also contains a Settings module that belongs only to that device.


interface Appliance {
    void turnOn();
}
interface VoiceControl {
    void executeCommand(String command);
}
interface RemoteControl {
    void executeRemoteCommand(String command);
}

// Example appliance: Smart Light
class SmartLight implements Appliance, VoiceControl, RemoteControl {
    private Settings settings;

    public SmartLight() {
        settings = new Settings();
    }

    @Override
    public void turnOn() {
        System.out.println("Smart Light is now ON.");
    }

    @Override
    public void executeCommand(String command) {
        System.out.println("Voice command received: " + command);
    }

    public void executeRemoteCommand(String command) {
        System.out.println("Remote command executed: " + command);
    }

    class Settings {
        private int brightness = 50;

        public void setBrightness(int value) {
            brightness = value;
            System.out.println("Brightness set to: " + brightness + "%");
        }

        public int getBrightness() {
            return brightness;
        }
    }

    public Settings getSettings() {
        return settings;
    }
}


class SmartHomeSystem {
    public static void main(String[] args) {
        SmartLight light = new SmartLight();


        light.turnOn();
        light.executeCommand("Dim the light");
        light.executeRemoteCommand("Turn off the light");

        SmartLight.Settings lightSettings = light.getSettings();
        lightSettings.setBrightness(80);
        System.out.println("Current brightness: " + lightSettings.getBrightness() + "%");
    }
}