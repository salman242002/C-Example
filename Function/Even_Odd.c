#include <stdio.h>
int num(int);

int main()
{
    int a;
    printf("Enter one value: ");
    scanf("%d", &a);
    num(a);
    return 0;
}

int num(int a)
{
    if (a % 2 == 0)
        printf("Even!");
    else
        printf("Odd!");
}