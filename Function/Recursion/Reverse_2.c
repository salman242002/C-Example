#include <stdio.h>
int reverse(int n);
int main()
{
    int n;
    printf("Enter a digit: ");
    scanf("%d", &n);

    printf("The reverse value is: %d", reverse(n));

    return 0;
}

int rem, sum = 0;
int reverse(int n)
{
    
    if (n)
    {
        rem = n % 10;
        sum = sum*10 + rem;
        reverse(n / 10);
    }
    else
        return sum;
    return sum;
}

