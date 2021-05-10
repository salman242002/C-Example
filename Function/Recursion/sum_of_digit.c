#include <stdio.h>

int sum(int a)
{
    if (a == 0)
        return 0;
    else
        return ((a % 10) + sum(a / 10));
}
int main()
{
    int a;
    printf("Enter a digit: ");
    scanf("%d", &a);

    printf("Sum of digig: %d", sum(a));
    return 0;
}
