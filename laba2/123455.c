#include <stdio.h>

int main() {
    int n,j,i,r;
    printf("Enter the dimension of the matrix: ");
    scanf("%d", &n);
    
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
    
    int matrix2[n][n],matrix3[i][j];
    printf("Enter the values of the matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    printf("\nKvadrat matrici:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            for (r = 0; r < n; r++)
                matrix3[i][j] += matrix2[i][r] * matrix2[r][j];
                
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n");
    }
}