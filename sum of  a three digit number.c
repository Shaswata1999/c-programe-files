#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0,rem;
    printf("Enter a three digit number");
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n%10;
        sum = sum+rem;
        n = n/10;
    }
    printf("The sum of three digit number is %d",sum);
}
