#include <stdio.h>

int main() {
    int n,j,i,r;
    printf("Enter the dimension of the matrix: ");
    scanf("%d", &n);
    double matrix2[n][n];
    double matrix[n][n];
    printf("Enter the values of the matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }
    
    double sum1 = 0, sum2 = 0;
    for(int i=0; i<n; i++) {
        sum1 += matrix[i][i]; 
        sum2 += matrix[i][n-i-1];
    }
    printf("Sum of elements on main diagonal: %lf\n", sum1);
    printf("Sum of elements on secondary diagonal: %lf\n", sum2);
    
    
    printf("\nKvadrat matrici:\n");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            for (r = 0; r < n; r++)
                matrix2[i][j] += matrix[i][r] * matrix[r][j];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%lf\t", matrix2[i][j]);
        }
        printf("\n");
    }
}