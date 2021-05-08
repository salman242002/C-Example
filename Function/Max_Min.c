#include <stdio.h>

int max(int c, int d)
{
    if (c > d)
        return c;
    else
        return d;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("The maximum value is: %d\n", max(a, b));
    printf("The minimum value is: %d", min(a, b));

    return 0;
}