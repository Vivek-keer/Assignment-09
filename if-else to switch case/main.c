#include <stdio.h>
#include<stdlib.h>

int main() {
    int x;
    printf("Enter the any following number: 1,2,3\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
    printf("\"Good\"");break;
    case 2:
    printf("\" Better\"");break;
    case 3:
    printf("\"Best\"");break;

    default:
    printf("Invalid");break;
    }
    return 0;
}
