//Q5. Create a class Notification with method send().
//Create subclasses:
// EmailNotification
// SMSNotification
// PushNotification
//Each subclass should override the method and display a different notification message.

package polymorphism;

class Notification {
    void send() {
        System.out.println("Sending notification...");
    }
}

class EmailNotification extends Notification {
    @Override
    void send() {
        System.out.println("Email notification sent!");
    }
}
class SMSNotification extends Notification {
    @Override
    void send() {
        System.out.println("SMS notification sent!");
    }
}
class PushNotification extends Notification {
    @Override
    void send() {
        System.out.println("Push notification sent!");
    }
}

class MainNotification {
    public static void main(String[] args) {
        Notification n1 = new EmailNotification();
        n1.send();

        Notification n2 = new SMSNotification();
        n2.send();

        Notification n3 = new PushNotification();
        n3.send();
    }
}
