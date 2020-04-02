#include<stdio.h>
#include<stdlib.h>
main()
{
  int x,y,z,max;

  printf("Enter the first number: ");
     scanf("%d",&x);

   printf("Enter the second number: ");
      scanf("%d",&y);

   printf("Enter the third number: ");
      scanf("%d",&z);

    if(x>y && x>z)
    {
        printf("The maximum number %d",x);
    }
    if(y>x && y>z)
     {
        printf("The maximum number %d",y);
     }
     if(z>x && z>y)
     {
        printf("The maximum number %d",z);
     }
}
