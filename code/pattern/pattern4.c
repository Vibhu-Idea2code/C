#include <stdio.h>
int main()
{
    int i, n;
    printf("enter your choice number for pattern:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
    for(int s=1;s<=n-i;s++){
        printf(" ");
    }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
// enter your choice number for pattern:6    
//      *
//     **
//    ***
//   ****
//  *****