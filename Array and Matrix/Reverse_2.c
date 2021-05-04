//Reverse with swapping

#include <stdio.h>
#define N 100
int main()
{
    int arr[N], i, n, end, temp;
    printf("Enter the total ememnt size: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("The number of %d index is: ", i);
        scanf("%d", &arr[i]);
    }

    end = n-1;
    for(i=0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        end --;
    }

    printf("The reverse elements are: ");
    for(i=0; i<n; i++)
    {
        printf("\n%d", arr[i]);
    }
    




}