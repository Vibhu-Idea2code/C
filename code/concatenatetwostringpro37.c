#include <stdio.h>
#include <string.h>
 
void main()
{
    int i,j;
    char s1[100],s2[50];
    printf("enetr string \n");
    scanf("%s",&s1);
    printf("enetr string \n");
    scanf("%s",&s2);
for(i=0;s1[i]!='\0';i++);
    for(j=0;s2[j]!='\0';j++,i++){
        s1[i]=s2[j];
    }
    s1[i]='\0';
   printf("concatev %s  \n",s1);
//    return 0;

}