/*
  Question 04: Stack Implementation
 
  Description:
  Implement a stack using a one-dimensional array and user-defined functions.
  The program should support PUSH, POP, PEEK, DISPLAY, and EXIT operations
  while handling stack overflow and underflow conditions.
 */

#include <stdio.h>
#define maxSize 10

int stack[maxSize];
int top = -1;
void push()
{
    if (top == maxSize - 1)
    {
        printf("Stack Overflowed! Can not push more elements.\n");
    }
    else
    {
        int value;
        printf("Enter the element to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d pushed to the stack.\n", value);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflowed! No element to pop.\n");
    }
    else
    {
        printf("%d popped out.\n", stack[top]);
        top--;
    }
}
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("Top element is %d\n", stack[top]);
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("Stack Elements (top to bottom):[");
        for (int i = top; i >= 0; i--)
        {
            printf("%d , ", stack[i]);
        }
        printf("]");
    }
}
int main()
{
    int choice = 0;
    char userchoice;

    do
    {
        printf("\n--- Stack Menu ---\n");
        printf("\n1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting system...\n");
            return 0;
        default:
            printf("Invalid choice!\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &userchoice);

    } while (userchoice == 'Y' || userchoice == 'y');

    return 0;
}