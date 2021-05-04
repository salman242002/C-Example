#include <stdio.h>
#define N 100
int main()
{
    int arr[N], even[N], odd[N], i = 0, j = 0 , k, n;

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }

    printf("The even elemnts are: \n");
    for (i = 0; i < j; i++)
    {
        printf("%d\t", even[i]);
    }

    printf("\nThe odd elemnts are: \n");
    for (i = 0; i < k; i++)
    {
        printf("%d\t", odd[i]);
    }

    return 0;
}
