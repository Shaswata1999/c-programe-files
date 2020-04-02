#include<stdio.h>
#include<stdlib.h>

int main()
{
	 int array1[10][10], array2[10][10];
     int i, j, m, n, a, b, c, p, q, r;
 
    printf("Enter number of row...");
     scanf("%d",&m);
     printf("Enter number of coloumn...");
     scanf("%d",&n);
     
   
        	 
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
        	printf("Enter elements in the matrix \n");
            scanf("%d,", &array1[i][j]);
            array2[i][j] = array1[i][j];
        }
         printf("\n");
    }
    
    
   printf("Enter the number of first row...");
   scanf("%d",&a);
   printf("Enter the number of second row...");
   scanf("%d",&b);
    
    for (i = 0; i < m; ++i)
    {
        
        c = array1[a - 1][i];
        array1[a - 1][i] = array1[b - 1][i];
        array1[b - 1][i] = c;
    }
      printf("The matix after interchanging the two rows: \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", array1[i][j]);
        }
        printf("\n");
     }
}
