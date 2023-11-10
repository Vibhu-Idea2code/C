#include <stdio.h>
int main()
{
    int i, n;
    printf("enter your choice number for pattern:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        for (int j = 1; j <= i; ++j)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
// enter your choice number for pattern:6
// 1
// 12
// 123
// 1234
// 12345