#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], i, j, s, m, n, temp;

    printf("Enter the size of 1st array: ");
    scanf("%d", &m);

    printf("\n");
    for (i = 0; i < m; i++)
    {
        printf("Enter the element of %d index: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the size of 2nd array: ");
    scanf("%d", &n);

    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the element of %d index: ", i);
        scanf("%d", &arr2[i]);
    }

    // marge of two array

    for (i = 0; i < n; i++)
    {
        arr1[m + i] = arr2[i];
    }

    //print the marge element of array

    s = m + n;
    for (i = 0; i < s; i++)
    {
        printf("%d ", arr1[i]);
    }

    //sorted the the elements of these arrays

    for (i = 0; i < s - 1; i++)
    {
        int min = i;

        for (j = i + 1; j < s; j++)
        {
            if (arr1[j] < arr1[min])
            {
                min = j;
            }
        }
        temp = arr1[i];
        arr1[i] = arr1[min];
        arr1[min] = temp;
    }

    // print the sorted elements of these arrays

    printf("\nThe sorted list is: ");
    for (i = 0; i < s; i++)
        printf(" %d", arr1[i]);
    return 0;
}