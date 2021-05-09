#include <stdio.h>
int sumo(int a, int b);
int main()
{
    int a, b;
    printf("Enter the limit: ");
    scanf("%d %d", &a, &b);

    printf("Sum of natural numbers: %d" ,sumo(a, b));
}

int sumo(int a, int b)
{
    if (a == b)
        return a;
    // else if (a > b)
    //     return 0;
    else
        return a + sumo(a + 1, b);
}