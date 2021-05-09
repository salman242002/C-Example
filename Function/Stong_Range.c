#include <stdio.h>
int limit(int n, int m);
int strong(int n);

int main()
{
    int n, m;
    printf("Enter the lower limit: ");
    scanf("%d", &n);

    printf("Enter the higher limit: ");
    scanf("%d", &m);

    limit(n, m);

    return 0;
}
int limit(int n, int m)
{
    printf("All prime number between this limit are: ");

    while (n <= m)
    {
        if (strong(n))
        {
            printf("%d\t", n);
        }
        n++;
    }
}

int strong(int n)
{
    int i, temp, fact, sum = 0;

    temp = n;

    while (temp != 0)
    {
        int r = temp % 10;
        fact = 1;
        for (i = 1; i <= r; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp = temp / 10;
    }

    if (n == sum)
        return 1;
    else
        return 0;
}