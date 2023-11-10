// Write a program to find the Max number from the given three number using ternoary

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

    (a >= b && a >= c) ? printf("a is max") : (b >= a && b >= c) ? printf("b is max")
                                                                 : printf("c is max");

    return 0;
}
