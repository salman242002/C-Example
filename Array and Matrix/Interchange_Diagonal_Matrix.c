#include <stdio.h>
#define N 100
#define M 100
int main()
{
    int matrix[N][M], i, j, m, n, temp;

    printf("Enter the value of row: ");
    scanf("%d", &m);
    printf("Enter the value of columns:");
    scanf("%d", &n);
    printf("\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Matrix[%d][%d]= ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Your entered matrix is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    if (m == n)
    {
        
        for (i = 0; i < n; i++)
        {
            temp = matrix[i][i];
            matrix[i][i] = matrix[i][n - i - 1];
            matrix[i][n - i - 1] = temp;
        }
        printf("\n");
        printf("Exchange matrix is :");
        printf("\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", matrix[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nSORRY! This is not a square matrix!");
    }

    return 0;
}