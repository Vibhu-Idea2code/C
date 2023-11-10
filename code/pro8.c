#include <stdio.h>
int main()
{

  int math, english, javascript, c, node, result;
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

  result = (math + english + javascript + c + node) * 100 / 500;

  printf("Hi \n math mark is %d \n english mark is %d \n js marks is %d \n c mark is %d \n node mark is %d \n finally your result is %d ", math, english, javascript, c, node, result);
  return 0;
}
