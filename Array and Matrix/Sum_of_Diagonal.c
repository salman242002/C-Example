#include <stdio.h>
#define N 100
//#define M 100
int main()
{
    int arr[N][N], i, j, m, n, sum = 0;
    printf("Enter the value of rows: ");
    scanf("%d", &m);
    printf("Enter the value of columns:");
    scanf("%d", &n);
    printf("\n");

    while (m != n)
    {
        printf("Incorrect value! Try again.");
        printf("\n");
        printf("Enter the value of rows: ");
        scanf("%d", &m);
        printf("Enter the value of columns:");
        scanf("%d", &n);
        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Matrix[%d][%d]= ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        sum += arr[i][i];
    }

    printf("\nSum of diagonal matrix is: %d", sum);

    return 0;
}