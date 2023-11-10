#include <stdio.h>
int main()
{

    int p, t, r, si;

    printf("enter a amount: ");
    scanf("%d", &p);

    printf("anter a time (quter,year,week,month): ");
    scanf("%d", &t);
    printf("anter a rate in (percet): ");
    scanf("%d", &r);

    si = p * t * r / 100;
    printf("Hi \n your simple interest calculating  is %d", si);

    return 0;
}
