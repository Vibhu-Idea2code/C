#include <stdio.h>
int main()
{

    int a, b;

    printf("enter a number: ");
    scanf("%d", &a);

    printf("anter a second number: ");
    scanf("%d", &b);

    printf("Hi \n your sum is %d", a + b);
    printf("\n Hi \n your sub is %d", a - b);
    printf("\n Hi \n your mul is %d", a * b);
    printf("\n Hi \n your div is %d", a / b);
    return 0;
}
