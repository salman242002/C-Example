#include<stdio.h>
#define N 100
int main()
{
    int arr[N], n, i, input, j, k, new_ele, pos;
    printf("Enter the range: ");
    scanf("%d", &n);

    for(i=1; i<n; i++)
    {
        printf("The %d element is: ",i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the new elemnt: ");
    scanf("%d", &new_ele);
    printf("Enter the new element's position: ");
    scanf("%d", &pos);

    for(i=n-1; i>=pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = new_ele;

    for(i=0; i<=n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;

}