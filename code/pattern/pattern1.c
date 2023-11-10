#include <stdio.h>
int main()
{
    int i, n;
    printf("enter your choice number for pattern:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        // printf("\n%d",i);
        // printf(" \n* ");

        for (int j = 0; j <= i; ++j)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
// enter your choice number for pattern:5
//  * 
//  *  * 
//  *  *  * 
//  *  *  *  * 
//  *  *  *  *  * 