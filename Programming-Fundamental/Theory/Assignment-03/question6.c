/*
 * Question 06: IEEE/ACM Membership Registration Manager
 *
 * Description:
 * Develop a file-based student membership management system.
 * The program should:
 * - Register, update, and delete student records.
 * - Store data using binary files.
 * - Generate batch-wise reports.
 * - Prevent duplicate student IDs.
 * - Maintain data persistence using file handling.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int studentID;
    char fullName[100];
    char batch[50];
    char membershipType[10];
    char registrationDate[12];
    char dateOfBirth[12];
    char interest[10];
} Student;

Student *loadDatabase(const char *filename, int *count);
void saveDatabase(const char *filename, Student *students, int count);
Student *addStudent(Student *students, int *count);
void updateStudent(Student *students, int count);
Student *deleteStudent(Student *students, int *count);
void displayStudents(Student *students, int count);
void generateBatchReport(Student *students, int count);
int findStudentByID(Student *students, int count, int id);

int main()
{
    int choice;
    int studentCount = 0;
    Student *students = loadDatabase("members.dat", &studentCount);

    do
    {
        printf("\n===== IEEE/ACM Membership Registration Manager =====\n");
        printf("1. Register a new student\n");
        printf("2. Update membership type or batch\n");
        printf("3. Delete a student registration\n");
        printf("4. View all registrations\n");
        printf("5. Generate batch-wise report\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            students = addStudent(students, &studentCount);
            saveDatabase("members.dat", students, studentCount);
            break;
        case 2:
            updateStudent(students, studentCount);
            saveDatabase("members.dat", students, studentCount);
            break;
        case 3:
            students = deleteStudent(students, &studentCount);
            saveDatabase("members.dat", students, studentCount);
            break;
        case 4:
            displayStudents(students, studentCount);
            break;
        case 5:
            generateBatchReport(students, studentCount);
            break;
        case 6:
            saveDatabase("members.dat", students, studentCount);
            free(students);
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}

Student *loadDatabase(const char *filename, int *count)
{
    FILE *file = fopen(filename, "rb");
    Student *students = NULL;
    *count = 0;

    if (file)
    {
        fseek(file, 0, SEEK_END);
        long size = ftell(file);
        rewind(file);
        *count = size / sizeof(Student);
        if (*count > 0)
        {
            students = (Student *)malloc(sizeof(Student) * (*count));
            if (!students)
            {
                printf("Memory allocation failed!\n");
                exit(1);
            }
            fread(students, sizeof(Student), *count, file);
        }
        fclose(file);
    }
    return students;
}

void saveDatabase(const char *filename, Student *students, int count)
{
    FILE *file = fopen(filename, "wb");
    if (!file)
    {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(students, sizeof(Student), count, file);
    fclose(file);
}

Student *addStudent(Student *students, int *count)
{
    Student newStudent;

    printf("Enter Student ID: ");
    scanf("%d", &newStudent.studentID);
    getchar();

    if (findStudentByID(students, *count, newStudent.studentID) != -1)
    {
        printf("Student ID already exists!\n");
        return students;
    }

    printf("Enter Full Name: ");
    fgets(newStudent.fullName, 100, stdin);
    newStudent.fullName[strcspn(newStudent.fullName, "\n")] = 0;

    printf("Enter Batch (CS/SE/Cyber Security/AI): ");
    fgets(newStudent.batch, 50, stdin);
    newStudent.batch[strcspn(newStudent.batch, "\n")] = 0;

    printf("Enter Membership Type (IEEE/ACM): ");
    fgets(newStudent.membershipType, 10, stdin);
    newStudent.membershipType[strcspn(newStudent.membershipType, "\n")] = 0;

    printf("Enter Registration Date (YYYY-MM-DD): ");
    fgets(newStudent.registrationDate, 12, stdin);
    newStudent.registrationDate[strcspn(newStudent.registrationDate, "\n")] = 0;

    printf("Enter Date of Birth (YYYY-MM-DD): ");
    fgets(newStudent.dateOfBirth, 12, stdin);
    newStudent.dateOfBirth[strcspn(newStudent.dateOfBirth, "\n")] = 0;

    printf("Enter Interest (IEEE/ACM/Both): ");
    fgets(newStudent.interest, 10, stdin);
    newStudent.interest[strcspn(newStudent.interest, "\n")] = 0;

    Student *temp = (Student *)realloc(students, sizeof(Student) * (*count + 1));
    if (!temp)
    {
        printf("Memory allocation failed!\n");
        return students;
    }
    students = temp;
    students[*count] = newStudent;
    (*count)++;

    printf("Student added successfully!\n");
    return students;
}

void updateStudent(Student *students, int count)
{
    int id;
    printf("Enter Student ID to update: ");
    scanf("%d", &id);
    getchar();

    int index = findStudentByID(students, count, id);
    if (index == -1)
    {
        printf("Student not found!\n");
        return;
    }

    printf("Enter new Batch (CS/SE/Cyber Security/AI): ");
    fgets(students[index].batch, 50, stdin);
    students[index].batch[strcspn(students[index].batch, "\n")] = 0;

    printf("Enter new Membership Type (IEEE/ACM): ");
    fgets(students[index].membershipType, 10, stdin);
    students[index].membershipType[strcspn(students[index].membershipType, "\n")] = 0;

    printf("Student information updated successfully!\n");
}

Student *deleteStudent(Student *students, int *count)
{
    int id;
    printf("Enter Student ID to delete: ");
    scanf("%d", &id);
    getchar();

    int index = findStudentByID(students, *count, id);
    if (index == -1)
    {
        printf("Student not found!\n");
        return students;
    }

    for (int i = index; i < *count - 1; i++)
    {
        students[i] = students[i + 1];
    }
    (*count)--;

    Student *temp = (Student *)realloc(students, sizeof(Student) * (*count));
    if (temp)
        students = temp;

    printf("Student deleted successfully!\n");
    return students;
}

void displayStudents(Student *students, int count)
{
    if (count == 0)
    {
        printf("No students to display.\n");
        return;
    }

    printf("\n%-5s %-20s %-15s %-10s %-12s %-12s %-10s\n",
           "ID", "Full Name", "Batch", "Membership", "Reg Date", "DOB", "Interest");
    printf("----------------------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        printf("%-5d %-20s %-15s %-10s %-12s %-12s %-10s\n",
               students[i].studentID,
               students[i].fullName,
               students[i].batch,
               students[i].membershipType,
               students[i].registrationDate,
               students[i].dateOfBirth,
               students[i].interest);
    }
}

void generateBatchReport(Student *students, int count)
{
    char batch[50], interest[10];
    printf("Enter Batch to filter (CS/SE/Cyber Security/AI): ");
    fgets(batch, 50, stdin);
    batch[strcspn(batch, "\n")] = 0;

    printf("Enter Interest to filter (IEEE/ACM/Both): ");
    fgets(interest, 10, stdin);
    interest[strcspn(interest, "\n")] = 0;

    printf("\n%-5s %-20s %-15s %-10s %-12s %-12s %-10s\n",
           "ID", "Full Name", "Batch", "Membership", "Reg Date", "DOB", "Interest");
    printf("-------------------------------------------------------------------------------\n");

    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(students[i].batch, batch) == 0 &&
            strcmp(students[i].interest, interest) == 0)
        {
            printf("%-5d %-20s %-15s %-10s %-12s %-12s %-10s\n",
                   students[i].studentID,
                   students[i].fullName,
                   students[i].batch,
                   students[i].membershipType,
                   students[i].registrationDate,
                   students[i].dateOfBirth,
                   students[i].interest);
            found = 1;
        }
    }

    if (!found)
        printf("No students found for this filter.\n");
}

int findStudentByID(Student *students, int count, int id)
{
    for (int i = 0; i < count; i++)
    {
        if (students[i].studentID == id)
            return i;
    }
    return -1;
}
