#include <stdio.h>
#include <math.h>

int cube(int a)
{
    return pow(a, 3);
}

int main()
{
    int a;
    printf("Enter the value: ");
    scanf("%d", &a);
    printf("The result is: %d", cube(a));
    return 0;
}
