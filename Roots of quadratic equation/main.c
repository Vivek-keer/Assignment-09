
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,c,d; float x,y;
    printf("Enter the values of coefficent a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
     d=b*b-4*a*c;
    switch(d)
    {
    case 0:
        x=(-b)/(2*a);
    printf("\nRoots are %.2f and %.2f",x,x); break;
    default: switch(d>0)
    {
    case 1:
        x=(-b+sqrt(d))/2*a; y=(-b-sqrt(d))/2*a;
         printf("Roots are %.2f and %.2f",x,y); break;
    case 0:
       d=4*a*c-b*b;
        x=(-b+sqrt(d))/2*a; y=(-b-sqrt(d))/2*a;
        printf("Roots are %.2fi and %.2fi",x,y); break;
    }


    break;


    }
    return 0;
}
