#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,max=0;
    printf("Enter the first number");
    scanf("%d",&x);
    printf("Enter the second number");
    scanf("%d",&y);
    if(x>y)
    {
        max = x;
    }
    else
    {
        max = y;
    }
    printf("The max number is %d",max);
}
