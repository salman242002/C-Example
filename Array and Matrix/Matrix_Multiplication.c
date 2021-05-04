#include <stdio.h>
#define N 100
#define M 100
int main()
{
    int arr1[N][M], arr2[N][M], i, j, k, r1, r2, c1, c2, sum = 0, multi[N][M];

    printf("Enter your row of 1st matrix: ");
    scanf("%d", &r1);

    printf("Enter your column 1st of matrix: ");
    scanf("%d", &c1);

    printf("Enter your row of 2nd matrix: ");
    scanf("%d", &r2);

    printf("Enter your column 2nd of matrix: ");
    scanf("%d", &c2);

    while (c1 != r2)
    {
        printf("Can not fullfill the condition of multiplication of matrix!\nTry again.\n");
        printf("Enter your row of 1st matrix: ");
        scanf("%d", &r1);

        printf("Enter your column 1st of matrix: ");
        scanf("%d", &c1);

        printf("Enter your row of 2nd matrix: ");
        scanf("%d", &r2);

        printf("Enter your column 2nd of matrix: ");
        scanf("%d", &c2);
    }

    printf("Enter your 1st matrix's value: \n");

    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
        {
            printf("Matrix_1[%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }

    printf("Enter your 2nd matrix's value: \n");

    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
        {
            printf("Matrix_2[%d][%d] = ", i, j);
            scanf("%d", &arr2[i][j]);
        }

    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }

            multi[i][j] = sum;
            sum = 0;
        }

    printf("The multiplication of this: \n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", multi[i][j]);
        }
        printf("\n");
    }

    return 0;
}