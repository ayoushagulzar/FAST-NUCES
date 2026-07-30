// Create a C program that defines a constant for the conversion factor of meters to kilometers.
// Use a static variable in a function to count how many times the function is called. 

#include <stdio.h>

#define METER_TO_KM 0.001

float convertToKM(float meters)
{
    static int funcCall_count = 0;
    funcCall_count++;
    printf("Function is called %d times\n", funcCall_count);
    return meters * METER_TO_KM;
}

int main()
{
    float meters;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter distance in meters: ");
        scanf("%f", &meters);

        float km = convertToKM(meters);
        printf("%.3f meters = %.3f kilometers\n", meters, km);
    }

    return 0;
}
