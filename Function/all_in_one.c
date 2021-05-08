#include <stdio.h>
#include <math.h>
int prime(int n)
{
    int i;
    for(i = 2; i< n/2; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int armstrong(int n)
{
    int sum = 0, temp, r;
    temp = n;

    while (temp != 0)
    {
        r = temp % 10;
        sum += pow(r, 3);
        temp = temp / 10;
    }
    return (sum == n);
}
int perfect(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return (sum == n);
}

int main()
{
    int n;
    printf("Enter a digit: ");
    scanf("%d", &n);

    prime(n);
    armstrong(n);
    perfect(n);

    if (prime(n))
    {
        printf("%d in a prime number\n", n);
    }
    else
    {
        printf("%d in no a prime number\n", n);
    }

    if (armstrong(n))
    {
        printf("%d in an armstrong number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    if (perfect(n))
    {
        printf("%d in a perfect number\n", n);
    }

    else
    {
        printf("%d in no a perfect number\n", n);
    }


    return 0;
}