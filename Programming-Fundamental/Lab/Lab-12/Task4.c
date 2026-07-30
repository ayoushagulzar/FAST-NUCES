// Write a program to store monthly sales data. Use malloc to allocate memory for N days, take 
// input, and calculate the total sales. Then use realloc to extend the array when additional 
// days’ data is needed and recompute the total. 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, additionalDays;
    float total = 0;

    printf("Enter the number of days: ");
    scanf("%d", &N);

    float *sales = (float *)malloc(N * sizeof(float));
    if (sales == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        printf("Enter sales for day %d: ", i + 1);
        scanf("%f", &sales[i]);
        total += sales[i];
    }

    printf("\nTotal sales for %d days: %.2f\n", N, total);

    printf("\nEnter number of additional days: ");
    scanf("%d", &additionalDays);

    float *temp = (float *)realloc(sales, (N + additionalDays) * sizeof(float));
    if (temp == NULL)
    {
        printf("Reallocation failed!\n");
        free(sales);
        sales = NULL;
        return 1;
    }
    sales = temp;

    for (int i = N; i < N + additionalDays; i++)
    {
        printf("Enter sales for day %d: ", i + 1);
        scanf("%f", &sales[i]);
    }

    total = 0;
    for (int i = 0; i < N + additionalDays; i++)
    {
        total += sales[i];
    }

    printf("\nTotal sales for %d days: %.2f\n", N + additionalDays, total);

    free(sales);
    sales = NULL;

    return 0;
}
