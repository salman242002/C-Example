#include <stdio.h>
#define N 100
int main()
{
    int arr[N], i, j, n, temp;

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The bubble sorted values are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}