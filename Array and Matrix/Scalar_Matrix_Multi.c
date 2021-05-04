#include <stdio.h>
#define N 100
#define M 100
int main()
{
    int matrix[N][M], i, j, m, n, o, multi;

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

    printf("Enter the value that you wanna multiplication: ");
    scanf("%d", &o);
    printf("\n");

    printf("The multiplication of your scalar matrix is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            matrix[i][j] *= o;
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
