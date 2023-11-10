#include <stdio.h>
int main()
{

    double a, b;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping, a = %lf\n", a);
    printf("After swapping, b = %lf\n", b);
    return 0;
}
