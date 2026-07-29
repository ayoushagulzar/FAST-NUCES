//Q1. FAST University is developing a Smart Campus System.
//       Every device can connect via WiFi and Bluetooth
//       Both provide a default method connect()
//       Each device belongs to a Department inside the university
//Tasks:
//      1. Create interfaces WiFi and Bluetooth
//      2. Resolve conflict in SmartDevice
//      3. Use inner class Department inside FAST
interface WIFI{
    default void connect(){
        System.out.println("Connecting via WIFI.");
    }
}
interface Bluetooth{
    default void connect(){
        System.out.println("Connecting via Bluetooth.");
    }
}
class SmartDevice implements WIFI, Bluetooth {

    FAST.Department dept;
    SmartDevice(FAST.Department dept){
        this.dept = dept;
    }
    void showDepartment(){
        dept.display();
    }
    @Override
    public void connect() {
        WIFI.super.connect();
        Bluetooth.super.connect();
    }
}
class FAST {

    class Department {
        String name;

        Department(String name) {
            this.name = name;
        }
        void display() {
            System.out.println("Department: " + name);
        }
    }
}

class Device_Main{
    public static void main(String[] args){
        FAST fast = new FAST();
        FAST.Department department = fast.new Department("Software Engineering");
        SmartDevice device = new SmartDevice(department);
        device.showDepartment();
        device.connect();
    }
}