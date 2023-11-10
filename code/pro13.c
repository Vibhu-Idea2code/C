// Write a program to find the Max number from the given three number using Nested If

#include <stdio.h>
int main()
{

    double a, b, c;
    printf("enter your choice  number a: ");
    scanf("%lf", &a);
    printf("enter your choice  number b: ");
    scanf("%lf", &b);
    printf("enter your choice  number c: ");
    scanf("%lf", &c);

    if (a >= b && a >= c)
    {
        printf("a is max");
    }
    else if (b >= a && b >= c)
    {
        printf("b is max");
    }
    else
    {
        printf("c is max");
    }

    return 0;
}
