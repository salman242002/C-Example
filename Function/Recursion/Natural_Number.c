#include <stdio.h>
int natural(int a, int b);
int main()
{
    int a, b;
    printf("Enter the limit: ");
    scanf("%d %d", &a, &b);

    printf("The naturals numbers are:");
    natural(a, b);
}

int natural(int a, int b)
{
    if (a >= b)
        return 1;

    printf("%d\t", a);
    natural(a + 1, b);
}
