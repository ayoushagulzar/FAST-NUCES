// Write a program to dynamically allocate memory for an array of integers of size n entered 
// by the user. Populate the array, double its size using realloc, add new elements, and display
// the updated array. 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int initialSize;
    printf("Enter the size of the array: ");
    scanf("%d", &initialSize);

    int *array = (int *)malloc(initialSize * sizeof(int));
    if (array == NULL)
    {
        printf("Memory allocation failed!n");
        return 1;
    }

    printf("Enter %d elements:\n", initialSize);
    for (int i = 0; i < initialSize; i++)
    {
        scanf("%d", &array[i]);
    }

    int newSize = 2 * initialSize;
    int *ptr = (int *)realloc(array, newSize * sizeof(int));
    if (ptr == NULL)
    {
        printf("Reallocation failed!\n");
        free(array);
        return 1;
    }
    array = ptr;

    printf("Enter %d new elements:\n", newSize - initialSize);
    for (int i = initialSize; i < newSize; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Updated array:\n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);
    array = NULL;

    return 0;
}
