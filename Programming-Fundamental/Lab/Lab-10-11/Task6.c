// Develop a payroll system to store employee details and their salary structure. 
// Each employee has an ID, name, and a nested salary structure with basic pay, bonuses, 
// and deductions. Write functions to calculate net salary and display employee salary details. 

#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define MAX_LENGTH 50

typedef struct
{
    float basic_pay;
    float bonus;
    float deduction;
} Salary;

typedef struct
{
    int id;
    char name[MAX_LENGTH];
    Salary salary;
} Employee;

void addEmployee(Employee employees[], int *count)
{
    if (*count >= MAX_EMPLOYEES)
    {
        printf("Employee list is full!\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &employees[*count].id);
    getchar();

    printf("Enter Employee Name: ");
    fgets(employees[*count].name, MAX_LENGTH, stdin);
    employees[*count].name[strcspn(employees[*count].name, "\n")] = '\0';

    printf("Enter Basic Pay: ");
    scanf("%f", &employees[*count].salary.basic_pay);

    printf("Enter Bonus: ");
    scanf("%f", &employees[*count].salary.bonus);

    printf("Enter Deduction: ");
    scanf("%f", &employees[*count].salary.deduction);
    getchar();

    (*count)++;
    printf("Employee added successfully!\n");
}

void displayAllEmployees(Employee employees[], int count)
{
    if (count == 0)
    {
        printf("No employees to display!\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        float netSalary = employees[i].salary.basic_pay + employees[i].salary.bonus - employees[i].salary.deduction;

        printf("\n===== Employee %d Salary Details =====\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Basic Pay: %.2f\n", employees[i].salary.basic_pay);
        printf("Bonus: %.2f\n", employees[i].salary.bonus);
        printf("Deduction: %.2f\n", employees[i].salary.deduction);
        printf("Net Salary: %.2f\n", netSalary);
    }
}

int main()
{
    Employee employees[MAX_EMPLOYEES];
    int employee_count = 0;
    int choice;

    do
    {
        printf("\n===== Payroll Menu =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employee Salary Details\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            addEmployee(employees, &employee_count);
            break;
        case 2:
            displayAllEmployees(employees, employee_count);
            break;
        case 3:
            printf("Exiting system...\n");
            return 0;
        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}
