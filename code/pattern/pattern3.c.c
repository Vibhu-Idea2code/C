#include <stdio.h>
int main()
{
    int i, n;
    printf("enter your choice number for pattern:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        // printf("%d",i);
        for (int j = 0; j <= i; ++j)
        {
            printf("%d", i);
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