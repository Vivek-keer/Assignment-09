#include <stdio.h>
#include <stdlib.h>


int main()
{
    int even;
    printf("Enter the even number ");
    scanf("%d",&even);
    switch(even%2)
    {
    case 0:

    printf("Nearest odd number is: %d",even+1); break;
    default:
    printf("Nearest odd number is: %d",even); break;


    }
    return 0;
}
