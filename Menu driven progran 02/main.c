#include <stdio.h>
#include <stdlib.h>
int main()
{
    char x; int a,b;

    printf("\n a. Addition");
    printf("\n b. Subtraction");
    printf("\n c. Multiplication");
    printf("\n d. Division");
    printf("\n e. Exit\n");
    while(1)
      {

        printf("Enter your choice: \n");
        fflush(stdin);
        scanf("%c",&x);
        switch(x)
        {
        case 'a':
        printf("Enter the two numbers: "); scanf("%d%d",&a,&b);
        printf("\n Sum is %d\n",a+b);
        break;
        case 'b':
        printf("Enter the two numbers: "); scanf("%d%d",&a,&b);
        printf("\n difference is %d\n",a-b);
        break;
        case 'c':
        printf("Enter the two numbers: "); scanf("%d%d",&a,&b);
        printf("\n Multiplication is %d\n",a*b);
        break;
        case 'd':
        printf("Enter the two numbers: "); scanf("%d%d",&a,&b);
        printf("\n div is %d\n",a/b);
        break;
        case 'e':
            exit(0); break;

        default:
        printf("\n Invalid option \n");
        }

      }

}



