#include<stdio.h>  
  
void fibonacciSeries(int);  
  
int main()  
{  
    int n;  
    // printf("How many number of series? :\n");  
    // scanf("%d", &n);  
    // calling function
    fibonacciSeries(n);  
    return 0;  
}  
  
void fibonacciSeries(int num)  
{   int n1 ,a = 0, b = 1, c;
    printf("enter the number of series\n");
    scanf("%d",&n1);
  
    // printf("\nFibonacci Series: \n");  
    // printf("1. %d\n2. %d\n", n1, n2);  
  
       for (c =0 ; c <= n1; c=a+b) {
        // c = a + b;
        //  printf("%d",c);
        a = b;
        b = c;
    printf("%d\n",c);
    }
}  