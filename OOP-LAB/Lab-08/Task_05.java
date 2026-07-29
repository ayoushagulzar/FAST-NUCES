//A smart home system manages different appliances such as SmartWashingMachine
//and SmartRefrigerator. Every appliance must be able to start working, but some
//appliances also support remote control through mobile applications.
//The system designer wants all appliances to follow a common structure for starting
//the appliance, while remote control functionality should be implemented only by
//appliances that support it.
//Task
//a. Create abstract class Appliance
//b. Method start()
//c. Interface RemoteControl
//d. Method controlRemotely()
//e. Implement both in SmartWashingMachine

abstract class Appliance{
    abstract void start();
}

interface RemoteControl{
    void controlRemotely();
}

class SmartWashingMachine extends Appliance implements RemoteControl{
    public void start(){
        System.out.println("Washing Machine started.");
    }
    public void controlRemotely(){
        System.out.println("Washing Machine can be controlled by remote.");
    }
}

class Machine_Main{
    public static void main(String[] args){
        SmartWashingMachine machine = new SmartWashingMachine();
        machine.start();
        machine.controlRemotely();
    }
}