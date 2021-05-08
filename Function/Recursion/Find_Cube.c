#include <stdio.h>
#include <math.h>

int cube(int a)
{
    if (a == 1)
        return 1;
    else
        return a * pow(a, 2);
}

int main()
{
    int a;
    printf("Enter the value: ");
    scanf("%d", &a);
    printf("The result is: %d", cube(a));
    return 0;
}
