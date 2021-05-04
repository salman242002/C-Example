//transpose matrix process 2

#include <stdio.h>
#define N 100
#define M 100
int main()
{
    int matrix[N][M], transpose[N][M], i, j, m, n, a[i][j], temp;

    printf("Enter the value of row: ");
    scanf("%d", &m);
    printf("Enter the value of columns: ");
    scanf("%d", &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i < j)
            {
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }

            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}