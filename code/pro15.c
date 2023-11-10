#include <stdio.h>

int main()
{

    double n1, n2, n3;

    printf("Enter n1 numbers: ");
    scanf("%lf", &n1);
    printf("Enter n2 numbers: ");
    scanf(" %lf", &n2);
    printf("Enter n3 numbers: ");
    scanf("%lf", &n3);

    if (n1 >= n2)
    {
        if (n1 >= n3)
            printf("%lf is the largest number.", n1);
        else
            printf("%lf is the largest number.", n3);
    }
    else
    {
        if (n2 >= n3)
            printf("%lf is the largest number.", n2);
        else
            printf("%lf is the largest number.", n3);
    }

    return 0;
}