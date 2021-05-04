#include <stdio.h>
int main()
{
    int arr[10][10], i, j, row, col, sum = 0;

    printf("Enter the value of row: ");
    scanf("%d", &row);

    printf("Enter the value of column: ");
    scanf("%d", &col);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Matrix[%d][%d]= ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("This is your matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("This is your Upper matrix: ");

    for (i = 0; i < row; i++)
    {
        printf("\n");
        for (j = 0; j < col; j++)
        {
            if (j >= i) //for lower matrix this will be j<=i. Everything else is the same.
            {
                printf("%d\t", arr[i][j]);
            }
            else
                printf("0\t");
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i <= j)
                sum += arr[i][j];
        }
    }
    printf("\nSum of upper matrix: ");
    printf("\n%d", sum);

    return 0;
}