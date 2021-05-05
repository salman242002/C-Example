#include <stdio.h>
#define N 100
int main()
{
    int arr1[N], n, i, j, ctr = 0;

    printf("Enter the size of your array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("The digit off %d index's is: ", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr1[i] == arr1[j])
            {
                ctr++;
                break;
            }
        }
    }

    if (ctr == 0)
        printf("\nSORRY! There is not any duplicate elements.");
    else
        printf("\nThe total number of duplicate elements is/are: %d", ctr);

    return 0;
}