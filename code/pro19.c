

#include <stdio.h>
int main()
{
    int ch, r, l, w, b, h;
    float area;
    printf("Enter your choice: \nArea of\n1 for Triangle,\n2 for Rectangle\n3 for Circle\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        // cicle
        printf("Enter The radius of Cicle:");
        scanf("%d", &r);
        area = (3.14 * r * r);
        printf("your result is:%f", area);
        break;
    case 2:
        //  tringle
        printf("Enter The radius of tringle base value: and(&&) The radius of the tringle is height value");
        scanf("%d%d", &b, &h);
        area = (b * h) / 2;
        printf("your result is:%f", area);
        break;
    case 3:
        //   Rectangle
        printf("Input length and width of the rectangle : ");
        scanf("%d%d", &l, &w);
        area = l * w;
        printf("your result is:%f", area);
        break;
    default:
        printf("sorry!! please enter valid input");
        break;
    }

    return 0;
}
