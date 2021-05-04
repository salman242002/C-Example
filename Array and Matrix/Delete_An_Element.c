//delete an element from an array

#include <stdio.h>
#define N 100
int main()
{
    int arr[N], n, i, pos;

    printf("Enter the total elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the element of %d index: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the posotion which you wanna delete: ");
    scanf("%d", &pos);

    if (pos > n)
    {
        printf("Sorry!!Deletaiton in not possible!");
    }

    else
    {
        for (i = pos - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];

        for (i = 0; i < n - 1; i++)
            printf("%d\n", arr[i]);
    }

    return 0;
}