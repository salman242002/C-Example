#include <stdio.h>
#include <math.h>
int limit(int n, int m);
int perfect(int n);

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

    if (n >= m)
    {
        printf("Invalid");
    }
    else
    {
        while (n < m)
        {
            if (perfect(n))
                printf("%d\t", n);
            n++;
        }
    }

    return 0;
}

int perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}