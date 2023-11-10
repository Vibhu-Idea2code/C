// h .Write a program to find out the max from given number
#include<stdio.h>
int main(){
   int  a[5],max=0,i;
   printf("enter the max number to your choice:");
//    scanf("%d",&a[5]);
   for(i=0;i<=4;i++){
    // printf("%d",a[i]);
   scanf("%d",&a[i]);
   }
   for(i=0;i<=4;i++){
 if(a[i]>max){
    max=a[i];
   }
   }
  
   printf("%d",max);
  
   return 0;
}