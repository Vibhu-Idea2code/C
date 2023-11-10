// f. write a program you have to print the table of given number.
#include<stdio.h>
int main(){
 int a,i,res;
 printf("enter the table");
 scanf("%d",&a);
 for(i=0;i<=10;i++){
    res=a*i;
    printf("%d*%d=%d\n",a,i,res);
 }   
}