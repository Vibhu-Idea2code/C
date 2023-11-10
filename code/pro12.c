#include <stdio.h>
int main()
{
    int n, i, temp = 0;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
    return 0;
}