//2. A smart home automation system controls multiple devices such as Smart Lights and
//Smart Fans. Every smart device must be able to turn on and turn off when
//commanded by the system.
//The system designer wants to ensure that every smart device follows the same structure
//for these operations.
//Task:
//a. Create an interface named SmartDevice.
//b. The interface should include two methods:
//      i. turnOn()
//      ii. turnOff()
//c. Create two classes:
//      i. SmartLight
//      ii. SmartFan
//d. Implement the interface methods in both classes.

interface SmartDevice{
    void turnOn();
    void turnOff();
}

class SmartLight implements SmartDevice{
   public void turnOn(){
        System.out.println("Smart Light turned on.");
    }
   public void turnOff(){
        System.out.println("Smart Light turned off.");
    }
}

class SmartFan implements SmartDevice{
   public void turnOn(){
        System.out.println("Smart fan turned on.");
    }
   public void turnOff(){
        System.out.println("Smart fan turned off.");
    }
}

class SmartDevice_Main{
    public static void main(String[] args){
        SmartDevice[] smartDevices = {
                new SmartLight(),
                new SmartFan()
        };

        for (SmartDevice SD : smartDevices){
            SD.turnOn();
            SD.turnOff();
        }
    }
}
