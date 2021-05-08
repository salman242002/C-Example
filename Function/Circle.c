#include <stdio.h>
#include <math.h>
float dia(float r);
float cum(float r, float pi);
float area(float r, float pi);

int main()
{
    float r, pi = 3.1416; //we can use here MI_PI function instead of pi = 3.1416
    printf("Enter the value of radius(r): ");
    scanf("%f", &r);

    printf("The diameter of circle is: %.2f\n", dia(r));
    printf("The circumference of circle is: %.2f\n", cum(r, pi));
    printf("The area of circle is: %.2f\n", area(r, pi));

    return 0;
}

float dia(float r)
{
    return 2 * r;
}

float cum(float r, float pi)
{
    return 2 * pi * r;
}

float area(float r, float pi)
{
    return pi * pow(r, 2);
}
