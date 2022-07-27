#include <stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    printf("1. Converting positive to negative\n2.Converting negative to positive\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x>0) x=-1*x;
    printf("\n Negative number is %d",x);
    break;
    case 2:
       printf("Enter the number: ");
    scanf("%d",&x);
    if(x<0) x=-1*x;
    printf("\n Positive number is %d",x);
    printf("\n");
     break;

    default:
    printf("Invalid");break;
    }
    return 0;
}
