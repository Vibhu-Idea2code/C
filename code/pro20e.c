#include<stdio.h>
int main(){
    int n1 ,a = 0, b = 1, c;
    printf("enter the number of series");
    scanf("%d",&n1);
    // printf("\n%d %d",a,b);
    // c=a+b;
    for (c =0 ; c <= n1; c=a+b) {
        // c = a + b;
        //  printf("%d",c);
        a = b;
        b = c;
    printf("%d\n",c);
    }

}