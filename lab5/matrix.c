#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int i,j,k;

void read_arr(double **arr, int n)
{
    for (i = 0; i < n ; i++)
        for (j = 0; j < n; j++)
            scanf("%lf", &arr[i][j]);
}

void print_arr(double **arr, int n)
{
    for (i = 0; i < n * n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3g\t ", arr[i][j]);
        }
        printf("\n");
    }
}

double** addMatrix(double** matrix1, double** matrix2, int n) {
    double** result = (double**)malloc(n * sizeof(double*));

    for (int i = 0; i < n; i++) {
        result[i] = (double*)malloc(n * sizeof(double));

        for (int j = 0; j < n; j++)
            result[i][j] = matrix1[i][j] + matrix2[i][j];
    }

    return result;
}

double** subMatrix(double** matrix1, double** matrix2, int n) {
    double** result = (double**)malloc(n * sizeof(double*));

    for (int i = 0; i < n; i++) {
        result[i] = (double*)malloc(n * sizeof(double));

        for (int j = 0; j < n; j++)
            result[i][j] = matrix1[i][j] - matrix2[i][j];
    }

    return result;
}

double** multMatrix(double** matrix1, double** matrix2, int n) {
    double** result = (double**)malloc(n * sizeof(double*));

    for (int i = 0; i < n; i++) {
        result[i] = (double*)malloc(n * sizeof(double));

        for (int j = 0; j < n; j++) {
            result[i][j] = 0;

            for (int k = 0; k < n; k++)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }

    return result;
}