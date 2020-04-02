#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,perpent,area=0;
    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the perpent");
    scanf("%d",&perpent);
    area = 0.5*base*perpent;
    printf("THe area of triangle is %d",area);
}
