/*
  Question 03: Power Grid Monitoring System
 
  Description:
  Develop a power grid monitoring system using a two-dimensional array and
  bitwise operations. The program should:
  - Update sector status flags.
  - Query the status of a sector.
  - Run system diagnostics to identify overloaded sectors or those requiring
    maintenance.
 */

#include <stdio.h>

void updateSectorStatus(int rows, int columns, int grid[rows][columns])
{
    int r, c, flagchoice;
    char userchoice;

    printf("Enter row (0-%d): ", rows - 1);
    scanf("%d", &r);
    printf("Enter column (0-%d): ", columns - 1);
    scanf("%d", &c);

    if (r < 0 || r >= rows || c < 0 || c >= columns)
    {
        printf("Invalid!\n");
        return;
    }

    printf("\nWhich flag do you want to update?\n");
    printf("0 - Power Status\n");
    printf("1 - Overload Warning\n");
    printf("2 - Maintenance Required\n");
    printf("Enter flag number: ");
    scanf("%d", &flagchoice);

    if (flagchoice < 0 || flagchoice > 2)
    {
        printf("Invalid flagchoice!\n");
        return;
    }
    // set to turn the bit ON and clear to turn the bit OFF
    printf("Do you want to set or clear this flag? (s/c): ");
    scanf(" %c", &userchoice);

    if (userchoice == 's' || userchoice == 'S')
    {

        //  | turns a bit ON
        grid[r][c] |= (1 << flagchoice); // set the chosen bit to 1
    }

    else if (userchoice == 'c' || userchoice == 'C')
    {
        // & ~ turns a bit OFF
        grid[r][c] &= ~(1 << flagchoice); // clear the chosen bit to 0
    }
    else
    {
        printf("Invalid choice!\n");
        return;
    }

    printf("Sector (%d,%d) updated successfully!\n", r, c);
}

void querySectorStatus(int rows, int columns, int grid[rows][columns])
{
    int r, c;
    printf("Enter row (0-%d): ", rows - 1);
    scanf("%d", &r);
    printf("Enter column (0-%d): ", columns - 1);
    scanf("%d", &c);

    if (r < 0 || r >= rows || c < 0 || c >= columns)
    {
        printf("Invalid!\n");
        return;
    }

    int status = grid[r][c];

    printf("\n--- Sector (%d, %d) Status ---\n", r, c);
    if (status & 1)
        printf("Power: ON\n");
    else
        printf("Power: OFF\n");

    if (status & (1 << 1))
        printf("Overload Warning: YES\n");
    else
        printf("Overload Warning: NO\n");

    if (status & (1 << 2))
        printf("Maintenance Required: YES\n");
    else
        printf("Maintenance Required: NO\n");
}

void runSystemDiagnostic(int rows, int columns, int grid[rows][columns])
{
    int overloaded = 0;
    int maintenance = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (grid[i][j] & (1 << 1))
                overloaded++;
            if (grid[i][j] & (1 << 2))
                maintenance++;
        }
    }

    printf("\n--- System Diagnostic Report ---\n");
    printf("Total Overloaded Sectors: %d\n", overloaded);
    printf("Total Sectors Requiring Maintenance: %d\n", maintenance);
}
int main()
{
    int choice;
    char userChoice;
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int grid[r][c];
    do
    {
        printf("\n=== IESCO Power Grid Menu ===\n");
        printf("1. Update Sector Status\n");
        printf("2. Query Sector Status\n");
        printf("3. Run System Diagnostic\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            updateSectorStatus(r, c, grid);
            break;
        case 2:
            querySectorStatus(r, c, grid);
            break;
        case 3:
            runSystemDiagnostic(r, c, grid);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &userChoice);

    } while (userChoice == 'y' || userChoice == 'Y');
    return 0;
}