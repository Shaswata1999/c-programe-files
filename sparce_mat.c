#include<stdio.h>
#include<stdlib.h>
int main()
{
	int array[10][10];
    int i, j, m, n;
    int counter = 0;
 
    printf("Enter the order of the matix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the co-efficients of the matix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
            if (array[i][j] == 0)
            {
                counter++;
            }
        }
    }
    printf("The matrix is:\n");
     for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
        	printf("%d\t",array[i][j]);
    	}
    	printf("\n");
	}
    if (counter > ((m * n) / 2))
    {
        printf("The given matrix is sparse matrix \n");
    }
    else
        printf("The given matrix is not a sparse matrix \n");
    printf("There are %d number of zeros", counter);
}
