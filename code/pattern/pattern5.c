#include <stdio.h>
int main()
{
    int i, n = 4, k;
    // printf("enter your choice number for pattern:");
    // scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= 2 * i + 1; k++)
        {
            printf("%d", k + 1);
        }
        printf("\n");
    }
}
//     12
//      1234
//    123456
//  12345678