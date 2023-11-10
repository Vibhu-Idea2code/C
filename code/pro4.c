#include <stdio.h>
int main()
{
   float pie = 3.14;
   int r;
   printf("Enter The radius of Cicle:");
   scanf("%d", &r);
   printf("The radius of the circle is %d\n", r);
   float area = (pie * r * r);
   printf("The area of the given circle is %f", area);
   return 0;
}
