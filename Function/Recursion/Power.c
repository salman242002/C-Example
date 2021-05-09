#include <stdio.h>
#include <math.h>
double power(int n, int m);
int main()
{
    double n;
    int m;

    printf("Enter a digit: ");
    scanf("%lf", &n);
    printf("Enter power: ");
    scanf("%d", &m);

    printf("Result: %.2f", power(n, m));

    return 0;
}

double power(int n, int m)
{
    if (m == 0)
        return 1;

    else if (m > 0)
        return n * pow(n, (m - 1));
    else
        return 1 / pow(n, -m);
}