#include<stdio.h>
#include<stdlib.h>
main()
{
    int x,y,odd,even;

    printf("Enter the first number: ");
      scanf("%d",&x);

    printf("Enter the second number: ");
       scanf("%d",&y);

      if(x%2 == 0)
           {
            printf("The number id even %d",x);
           }
       else
       {
           printf("The number is odd");
       }

}
