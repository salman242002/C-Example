#include <stdio.h>
int prime(int);
int limit(int, int);
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

int limit(int , int )
{
    printf("All prime number between this limit are: ");

    while (n <= m)
    {
        if (prime(n))
        {
            printf("%d\t", n);
        }
        n++;
    }
}

int prime(int num)
{
    int i;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
