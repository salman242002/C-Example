#include <stdio.h>

int reverse(int n)
{
    int rem;
    if (n == 0)
        return 0;
    else
    {

        rem = n % 10;
        printf("%d", rem);
        reverse(n / 10);
    }
}

int main()
{
    int n;
    printf("Enter a digit: ");
    scanf("%d", &n);
    printf("The reverse value is: ");
    reverse(n);

    return 0;
}