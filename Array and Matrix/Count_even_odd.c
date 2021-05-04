#include <stdio.h>
#define N 100
int main()
{
    int arr[N], i, even = 0, odd = 0, n;

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
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total number of even: %d\n", even);
    printf("Total number of odd: %d", odd);

    return 0;
}
