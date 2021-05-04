#include <stdio.h>
#define N 100
int main()
{
    int arr[N], n, i, key, j;

    printf("Enter the total elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the element of %d index: ", i); 
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while ((j >= 0) && (arr[j] > key))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("The sorted list is: ");
    for (i = 0; i < n; i++)
        printf(" %d", arr[i]);
    return 0;
}
