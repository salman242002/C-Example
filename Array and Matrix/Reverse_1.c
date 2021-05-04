//Normal and method of reverse
#include<stdio.h>
#define N 100
int main()
{
    int arr[N], n, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Ther number of %d indexs' is: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Array in reverse order: ");
    for(i=n-1; i>=0; i--)
    {
        printf("\n%d", arr[i]);
    }
}