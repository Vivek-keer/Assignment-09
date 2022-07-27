#include <stdio.h>
#include<stdlib.h>

int main() {
    int x;
    printf("Enter the year: ");
    scanf("%d",&x);
    switch(x%4)
    {
    case 0:
    printf("It is a leap year");break;
    default:
    printf("Not a leap year");break;
    }
    return 0;
}
