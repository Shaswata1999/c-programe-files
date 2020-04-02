#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, rows, columns, a[10][10], Sum = 0;
  
 	printf("\nEnter Number of rows :");
 	scanf("%d", &i);
 	
 	printf("\nEnter number of coloumn :");
 	scanf("%d",&j);
 
 	
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
    		printf("\nEnter the Matrix Elements :");
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   	  
 	for(rows = 0; rows < i; rows++)
  	{
   		Sum = Sum + a[rows][rows];
  	}
 
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );

 	return 0;
}
