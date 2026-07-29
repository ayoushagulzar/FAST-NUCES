//Q8. A smart home system controls different electronic devices such as lights, fans, and
//air conditioners. Each device has its own way of turning on.
//Create a parent class SmartDevice with a method:
//turnOn()
//Create the following subclasses:
// SmartLight
// SmartFan
// SmartAC
//Each subclass should override the turnOn() method to display different behavior.
//Requirements:
// Use runtime polymorphism
// Store device objects in an array of SmartDevice
// Loop through the array and call turnOn().

package polymorphism;

class SmartDevice{
    void turnOn(){
        System.out.println("Device turned on.");
    }
}
class SmartLight extends SmartDevice{
    @Override
    void turnOn(){
        System.out.println("Smart Light turned on.");
    }
}
class SmartFan extends SmartDevice{
    @Override
    void turnOn(){
        System.out.println("Smart Fan turned on.");
    }
}
class SmartAC extends SmartDevice{
    @Override
    void turnOn(){
        System.out.println("Smart AC turned on.");
    }
}

class MainDevices{
    public static void main(String[] args){
        SmartDevice[] devices = new SmartDevice[5];
        //initialization
        devices[0] = new SmartLight();
        devices[1] = new SmartFan();
        devices[2] = new SmartAC();
        devices[3] = new SmartLight();
        devices[4] = new SmartFan();

        for (int i = 0; i < devices.length; i++) {
            System.out.print("Device " + (i + 1) + ": ");
            devices[i].turnOn();
        }
    }
}