/*
 * Question 02: Spacecraft Fuel Simulation
 *
 * Description:
 * Develop a recursive program that simulates spacecraft fuel usage.
 * The program should:
 * - Deduct fuel at each planetary stop.
 * - Apply gravitational recharge and solar bonus.
 * - Display remaining fuel after every planet.
 * - Determine whether the spacecraft completes its journey.
 */

#include <stdio.h>

void calculateFuel(int fuel, int consumption, int recharge, int solarBonus, int planet, int totalPlanets)
{
    if (fuel == 0)
    {
        printf("No fuel left!\n");
        return;
    }
    if (planet > totalPlanets)
    {
        printf("All planets have been visited!\n");
        return;
    }
    char choice;
    printf("Will planet %d  pass through gravitational zones?(y/n): ", planet);
    scanf(" %c", &choice);
    fuel -= consumption;

    if (fuel < 0)
        fuel = 0;

    printf("Planet %d journey: Fuel consumed = %d\n", planet, consumption);

    if (choice == 'Y' || choice == 'y')
    {
        fuel += recharge;
        printf("Gravitational assist! Fuel increased by %d.\n", recharge);
    }
    if (planet % 4 == 0)
    {
        fuel += solarBonus;
        printf("Solar recharge! fuel increased by %d.\n", solarBonus);
    }
    printf("Planet %d: Fuel Remaining = %d\n", planet, fuel);
    calculateFuel(fuel, consumption, recharge, solarBonus, planet + 1, totalPlanets);
}
int main()
{
    int fuel, consumption, recharge, solarBonus, totalPlanets;
    printf("Enter the initial fuel: ");
    scanf("%d", &fuel);
    printf("Enter amount of fuel consumed per planet journey: ");
    scanf("%d", &consumption);
    printf("Enter the amount of fuel recharge for gravitational assist: ");
    scanf("%d", &recharge);
    printf("Enter solar bonus applied after visiting every four planets: ");
    scanf("%d", &solarBonus);
    printf("Enter the no of planets: ");
    scanf("%d", &totalPlanets);
    calculateFuel(fuel, consumption, recharge, solarBonus, 1, totalPlanets);
    return 0;
}