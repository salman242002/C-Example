#include <stdio.h>
#define N 100
#define M 100
int main()
{
    int arr1[N][M], arr2[N][M], i, j, k, r1, r2, c1, c2, isEqual = 1;

    printf("Enter your row of 1st matrix: ");
    scanf("%d", &r1);

    printf("Enter your column 1st of matrix: ");
    scanf("%d", &c1);

    printf("Enter your row of 2nd matrix: ");
    scanf("%d", &r2);

    printf("Enter your column 2nd of matrix: ");
    scanf("%d", &c2);

    
    while ((r1 != r2) || (c1 != c2))
    {
        printf("Your passing row and column of two matrixs are not matching. Try againa with new value.\n");

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

    //printf("Enter your 2nd matrix's value: \n");

    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                isEqual = 0;
                break;
            }
        }

    if (isEqual == 1)
        printf("Your entered two matrix have exist with same values!");
    else
        printf("Your entered two matrix have not exist with same values!");

    return 0;
}