//transpose matrix process 1

#include <stdio.h>
#define N 100
#define M 100
int main()
{
    int matrix[N][M], transpose[N][M], i, j, m, n;

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
            transpose[j][i] = matrix[i][j];

            //printf("%d\t", transpose[i][j]);
        }
        //printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}