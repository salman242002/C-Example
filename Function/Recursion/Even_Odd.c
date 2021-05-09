#include <stdio.h>
int even(int a, int b);
int odd(int a, int b);
int main()
{
    int a, b;
    printf("Enter the limit: ");
    scanf("%d %d", &a, &b);

    printf("Evens: ");
    even(a, b);
    printf("\n Odds: ");
    odd(a, b);
    return 0;
}

int even(int a, int b)
{
    if (a > b)
        return 0;

    if (a % 2 == 0)
        printf("%d\t", a);
    even(a + 1, b);
}

int odd(int a, int b)
{
    if (a > b)
        return 0;

    if (a % 2 == 1)
        printf("%d\t", a);
    odd(a + 1, b);
}