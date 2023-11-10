#include <stdio.h>
int main()
{

    double num;
    printf("enter your choice  number: ");
    scanf("%lf", &num);
    if (num < 0.0)
        printf("you entered a negative number.");
    else if (num > 0.0)
        printf("you entered a positive number.");
    else
        printf("You entered 0.");

    return 0;
}
