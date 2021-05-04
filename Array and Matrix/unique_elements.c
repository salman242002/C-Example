#include <stdio.h>
#define N 100
int main()
{
    int arr[N], i, j, n, search, found = 0;

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Unique: ");
    for (i = 0; i < n; i++)
    {
        found = 0;
        for (j = 0; j <= n ; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    found = 1;
                }
            }
        }
        if (found == 0)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
