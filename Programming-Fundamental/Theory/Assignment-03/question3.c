/*
 * Question 03: Employee Management System
 *
 * Description:
 * Develop an employee management system using structures.
 * The program should:
 * - Store records for multiple employees.
 * - Display all employee information.
 * - Find the employee with the highest salary.
 * - Search employees by ID or name.
 * - Support salary updates using structure arrays.
 */

#include <stdio.h>
#include <string.h>

typedef struct
{
    int empID;
    char empName[50];
    char empDesignation[50];
    float empSalary;
} Employee;

void inputEmployee(Employee emp[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n======== Employee %d =========\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].empID);
        getchar();

        printf("Enter Name: ");
        fgets(emp[i].empName, 50, stdin);
        emp[i].empName[strcspn(emp[i].empName, "\n")] = '\0';

        printf("Enter Designation: ");
        fgets(emp[i].empDesignation, 50, stdin);
        emp[i].empDesignation[strcspn(emp[i].empDesignation, "\n")] = '\0';

        printf("Enter Salary: ");
        scanf("%f", &emp[i].empSalary);
    }
    printf("\nEmployee data entered successfully!\n");
}

void displayEmployee(Employee emp[], int n)
{

    printf("\n=================================================================================\n");
    printf("| %-5s | %-10s | %-20s | %-20s | %-10s |\n",
           "S.No", "ID", "Name", "Designation", "Salary");
    printf("=================================================================================\n");

    for (int i = 0; i < n; i++)
    {
        printf("| %-5d | %-10d | %-20s | %-20s | %-10.2f |\n",
               i + 1,
               emp[i].empID,
               emp[i].empName,
               emp[i].empDesignation,
               emp[i].empSalary);
    }
    printf("=================================================================================\n");
}

void findHighestSalary(Employee emp[], int n)
{
    int highestIndex = 0;
    float highestSalary = emp[0].empSalary;

    for (int i = 1; i < n; i++)
    {
        if (emp[i].empSalary > highestSalary)
        {
            highestSalary = emp[i].empSalary;
            highestIndex = i;
        }
    }

    printf("\nEmployee with Highest Salary:\n");
    printf("ID: %d\n", emp[highestIndex].empID);
    printf("Name: %s\n", emp[highestIndex].empName);
    printf("Designation: %s\n", emp[highestIndex].empDesignation);
    printf("Salary: %.2f\n", emp[highestIndex].empSalary);
}

void searchByName(Employee emp[], int n)
{
    char name[50];
    getchar();

    printf("Enter the name of the employee: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < n; i++)
    {
        if (strcmp(emp[i].empName, name) == 0)
        {
            printf("\nEmployee Found!\n");
            printf("ID: %d\n", emp[i].empID);
            printf("Name: %s\n", emp[i].empName);
            printf("Designation: %s\n", emp[i].empDesignation);
            printf("Salary: %.2f\n", emp[i].empSalary);
            return;
        }
    }

    printf("Employee not found!\n");
}

void searchByID(Employee emp[], int n)
{
    int id;
    printf("Enter the ID of the employee: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++)
    {
        if (emp[i].empID == id)
        {
            printf("\nEmployee Found!\n");
            printf("ID: %d\n", emp[i].empID);
            printf("Name: %s\n", emp[i].empName);
            printf("Designation: %s\n", emp[i].empDesignation);
            printf("Salary: %.2f\n", emp[i].empSalary);
            return;
        }
    }

    printf("Employee not found!\n");
}

void searchEmployee(Employee emp[], int n)
{
    int choice;

    printf("\nHow do you want to search the employee?\n");
    printf("1. Search by Name\n");
    printf("2. Search by ID\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        searchByName(emp, n);
    }
    else if (choice == 2)
    {
        searchByID(emp, n);
    }
    else
    {
        printf("Invalid choice!\n");
    }
}

int main()
{
    int n_emp, choice;

    printf("Enter number of employees: ");
    scanf("%d", &n_emp);

    Employee employee[n_emp];

    do
    {
        printf("\n===== Employees' Record Management System =====\n");
        printf("1. Input Employees' Record\n");
        printf("2. Display Employees' Record\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            inputEmployee(employee, n_emp);
            break;
        case 2:
            displayEmployee(employee, n_emp);
            break;
        case 3:
            searchEmployee(employee, n_emp);
            break;
        case 4:
            printf("Exiting the system!\n");
            return 0;
        default:
            printf("Invalid choice!\n");
            break;
        }

    } while (choice != 4);

    return 0;
}

// If the company later wants to give a 10% salary bonus to employees whose salary is below a certain 
// threshold, we can add one more function in this program that updates salary values directly.
// Since arrays in C are passed by reference, passing the employee structure array to a function
// allows the function to access and modify the original data.

// void giveBonus(Employee emp[], int n, float threshold)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (emp[i].empSalary < threshold)
//         {
//             emp[i].empSalary = emp[i].empSalary + (emp[i].empSalary * 0.10);
//         }
//     }

//     printf("10%% bonus applied to all eligible employees.\n");
// }





	





