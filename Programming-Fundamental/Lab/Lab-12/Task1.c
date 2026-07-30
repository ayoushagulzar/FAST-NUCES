// Write a program to dynamically allocate memory for two matrices, A and B, of sizes m x n 
// and n x p, respectively. Populate the matrices with user-provided values, calculate their
// product matrix C, and print the result. Free all allocated memory afterward. 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, p;
    printf("Enter dimensions of matrix A (m X n): ");
    scanf("%d %d", &m, &n);
    printf("Enter number of columns of matrix B (p): ");
    scanf("%d", &p);

    int **A = (int **)malloc(m * sizeof(int *)); // Allocate memory for m row pointers
    for (int i = 0; i < m; i++)
        A[i] = (int *)malloc(n * sizeof(int)); // allocates memory for n integers of each row

    int **B = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        B[i] = (int *)malloc(p * sizeof(int));

    int **C = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
        C[i] = (int *)malloc(p * sizeof(int));

    printf("Enter elements of matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B (%d x %d):\n", n, p);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            C[i][j] = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Product matrix C (%d x %d):\n", m, p);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    for (int i = 0; i < m; i++)
        free(A[i]); // Free each row
    free(A);
    A = NULL;
    for (int i = 0; i < n; i++)
        free(B[i]);
    free(B);
    B = NULL;
    for (int i = 0; i < m; i++)
        free(C[i]);
    free(C);
    C = NULL;
    return 0;
}
