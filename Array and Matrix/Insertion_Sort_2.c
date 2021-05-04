#include <stdio.h>
int main()
{
    int arr[100], i, j, n, temp;

    printf("Enter the value of total elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the element of %d index: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        int min = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("The sorted list is: ");
    for (i = 0; i < n; i++)
        printf(" %d", arr[i]);
    return 0;
}