#include<stdio.h>
#define N 100
#define M 100
int main()
{
    int arr1[N][M], arr2[N][M], i, j, m, n, sum[N][M];

    printf("Enter the value of row: ");
    scanf("%d", &m);
    printf("Enter the value of columns: ");
    scanf("%d", &n);

    printf("Enter the elements of first matrix: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    } 

    printf("Enter the elements of second matrix: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    } 

    printf("Sum of these matrix is: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}