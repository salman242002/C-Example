#include <stdio.h>
#define N 100
int main()
{
    int arr1[N], n, i, j, ctr ;

    printf("Enter the size of your array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("The digit off %d index's is: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nThe unique elements is/are:");

    for (i = 0; i < n; i++)
    {
        ctr = 0;
        for (j = 0; j < n; j ++)
        {
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                    ctr++;
            }
        }

        if (ctr == 0)
        {
            printf("\n%d\t", arr1[i]);
        }
    }
    return 0;
}