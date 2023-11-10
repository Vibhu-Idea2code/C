#include <stdio.h>
int main()
{
    int i, fact = 1, n;
    printf("enter a valid factorial");
    scanf("%d", &n);

    if (n < 0)
    {
        printf(" %d your value is 0");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            // fact *= i;
            fact = (n - 1) * i;
        }
         printf("factroial is %d", n);
        printf("factroial is %d", fact);
    }
}

// enter a valid factorial5
// factroial is 5factroial is 20 