#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Enter the day number: \n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Monday is like Math. Add irritation, subtract sleep,\n multiply problem and divide happiness.\n"); break;
    case 2:
        printf("Tuesday, Another day to Rock!\n");break;
    case 3:
        printf("Happy Wednesday,Start a day with smile on your face \n and make it fruitful.\n");break;
    case 4:
        printf("I wish you a tolerable Thursday.\n That's all any of us can hope for.\n");break;
    case 5:
        printf("Fri-nally! Friday.\n Forget all bad and negative things happened this week and move forward to great weekend.\n");break;
    case 6:
        printf("Its Saturday, time to meet with Mysirg!\n");break;
    case 7:
        printf("It's A Beautiful Sunday! Day to refuel your soul.\n");break;
    default:
        printf("Invalid day\n");

    }
    return 0;
}
