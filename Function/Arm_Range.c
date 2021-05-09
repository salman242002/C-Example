#include <stdio.h>
#include <math.h>
int limit(int n, int m);
int arm(int n);

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
    printf("Print all the armstrong number between this intervals:  ");
    while (n <= m)
    {
        if (arm(n))
        {
            printf("%d\t", n);
        }
        n++;
    }
}

int arm(int n)
{
    int sum = 0, temp, r;
    temp = n;
    while (temp != 0)
    {
        r = temp % 10;
        sum += pow(r, 3);
        temp /= 10;
    }
    if (sum==n)
        return 1;
    else
        return 0;
}