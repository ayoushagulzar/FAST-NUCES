// 1. Write a Java program for a LibraryBook class with the following requirements
//  If no data is provided, book title should be &quot;Unknown&quot; and price 0
//  If title is provided, price should be set to 500
//  If title and price both are provided, assign both values
//  Create objects using all possible constructors

class LibraryBook {
    String title;
    double price;

    LibraryBook() {
        title = "Unknown";
        price = 0;
    }

    LibraryBook(String t) {
        title = t;
        price = 500;
    }

    LibraryBook(String t, double p) {
        title = t;
        price = p;
    }

    void display() {
        System.out.println("Title: " + title + ", Price: " + price);
    }

    public static void main(String[] args) {
        LibraryBook book1 = new LibraryBook();
        LibraryBook book2 = new LibraryBook("Java Basics");
        LibraryBook book3 = new LibraryBook("Advanced Java", 1200);

        book1.display();
        book2.display();
        book3.display();
    }
}
