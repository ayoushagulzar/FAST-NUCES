// Write a program that uses structures to manage flight information, including flight number,
// departure city, destination city, date, and available seats. Create functionalities to book
// a seat and display flight details. 

#include <stdio.h>

struct flightInfo
{
    int flightNumber;
    char departureCity[50];
    char destinationCity[50];
    char date[9];
    int availableSeats;
} f_info;

void BookSeat(int seats)
{
    if (f_info.availableSeats < seats)
    {
        printf("\nSorry %d seats are not available.\n", seats);
    }
    else
    {
        printf("\nYour seats are booked!\n");
        f_info.availableSeats -= seats;
        printf("\n=====Flight Information=====\n");
        printf("Flight Number: %d\n", f_info.flightNumber);
        printf("Departure City: %s\n", f_info.departureCity);
        f_info.departureCity[strcspn(f_info.departureCity, "\n")] = '\0';
        printf("Destination City: %s\n", f_info.destinationCity);
        f_info.destinationCity[strcspn(f_info.destinationCity, "\n")] = '\0';
        printf("Date: %s\n", f_info.date);
        printf("Available seats: %d\n", f_info.availableSeats);
    }
}
int main()
{
    int seats;
    printf("Enter flight number: ");
    scanf("%d", &f_info.flightNumber);
    getchar(); // used when we mix scanf and fgets... it consumes leftover newline
    printf("Enter departure city: ");
    fgets(f_info.departureCity, 50, stdin);
    printf("Enter destination city: ");
    fgets(f_info.destinationCity, 50, stdin);
    printf("Enter date (DD/MM/YY): ");
    scanf("%8s", f_info.date);
    printf("Enter available seats: ");
    scanf("%d", &f_info.availableSeats);
    printf("Enter the no: of seats you want to book: ");
    scanf("%d", &seats);

    BookSeat(seats);
    return 0;
}