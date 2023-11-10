#include <stdio.h>
int main()
{
  float b, h, area;
  printf("Enter The radius of tringle base value:");
  scanf("%f", &b);
  printf("The radius of the tringle is height value");
  scanf("%f", &h);
  area = (b * h) / 2;

  printf("\n\n area of tringle is: %f", area);
  return (0);
}