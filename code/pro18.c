

#include <stdio.h>
int main()
{
    int n1,n2,ch,res=n1,n2;
    // float res;
    printf("Enter your first nmber: ");
    scanf("%d", &n1);
     printf("Enter your second nmber: ");
    scanf("%d", &n2);
        printf("Enter your choice: \n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
    
        printf("addition number is%f",res,n1+n2);
        break;
    case 2:
    //  res=n1-n2;
        printf("subtraction number is%f",res,n1-n2);
        break;
    case 3:
    // res=n1*n2;
        printf("multiplication number is%f",res,n1*n2);
        break;
    case 4:
    // res=n1/n2;
        printf("division number is%f",res,n1/n2);
        break;
 

    default:
        printf("sorry!! please enter valid input");
        break;
    }

    return 0;
}
