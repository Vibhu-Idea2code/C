#include <stdio.h>
int main()
{

    int math, english, javascript, c, node, result, per;
    printf(" enter math marks: ");
    scanf("%d", &math);
    printf("enter english marks: ");
    scanf("%d", &english);
    printf("enter javascript marks: ");
    scanf("%d", &javascript);
    printf("enter c marks: ");
    scanf("%d", &c);
    printf(" enter node marks: ");
    scanf("%d", &node);

    result = math + english + javascript + c + node;
    per = (result) * 100 / 500;

    printf("Hi \n math mark is %d \n english mark is %d \n js marks is %d \n c mark is %d \n node mark is %d \n your total marks is %d \n your percentage is %d", math, english, javascript, c, node, result, per);

    if (per > 75)
    {
        printf("\nDistinction”");
    }
    else if (per > 60 && per <= 75)
    {
        printf("\nFirst class");
    }
    else if (per > 50 && per <= 60)
    {
        printf("\nSecond class");
    }
    else if (per > 35 && per <= 50)
    {
        printf("\npass class");
    }
    else
    {
        printf("fail");
    }

    return 0;
}
