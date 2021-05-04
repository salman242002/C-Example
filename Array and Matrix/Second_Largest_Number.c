#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[100], i, n, l1, l2;
    printf("Enter the size of your elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    l1 = INT_MIN;
    l2 = INT_MIN; 

    for (i = 0; i < n; i++)
    {
        if (arr[i] > l1)
        {
            l2 = l1;
            l1 = arr[i];
        }
        else if (arr[i] > l2 && arr[i] < l1)
        {
            l2 = arr[i];
        }
    }

    //printf("first larges and second largest number respectivly: %d and %d", l1, l2);

    printf("First: %d\n", l1);
    printf("Second: %d", l2);
    return 0;
}
