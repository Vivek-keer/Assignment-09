#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x; int a,b,c;
    printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
    printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
    printf("3. Check whether a given set of three numbers are equilateral triangle or not\n");
    printf("4. Exit\n");

    while(1)
    {
        printf("\n Enter your choice: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("Enter the numbers: ");
            scanf("%d%d%d",&a,&b,&c);

        if(a==b||b==c||a==c) printf("Triangle is Isosceles");else printf("Not isosceles");

         break;
        case 2:
            printf("Enter the numbers: ");
            scanf("%d%d%d",&a,&b,&c);
            if(((a*a+b*b)==c*c)||((c*c+b*b)==a*a)||((a*a+c*c==b*b)))
            printf("\n Right angled Triangle"); else printf("Not Right angled triangle");
            break;

        case 3:
        printf("Enter the numbers: ");
            scanf("%d%d%d",&a,&b,&c);

            if(a==b&&b==c) printf("equatorial triangle"); else  printf("Not equatorial triangle");
            break;
        case 4:
        exit(0);
        default:
            printf("Invalid ");


    }
    }
    return 0;
}
