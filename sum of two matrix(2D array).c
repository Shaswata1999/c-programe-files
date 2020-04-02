#include<stdio.h>
int main()
{
    int r,c,row,col;
    int first[50][50],second[50][50],sum[10][10];
    printf("Enter the row:");
    scanf("%d",&row);
    printf("Enter the coloumn");
    scanf("%d",&col);
    /*entering elements to 1st matrix*/
   printf("Enter value in First Matrix");
    for(r=0;r<row;r++)
    {
        for(c=0;c<col;c++)
        {
            scanf("%d",&first[r][c]);
        }
    }
    /*entering selements to 2nd matrix*/
   printf("Enter value in second Matrix");
    for(r=0;r<row;r++)
    {
        for(c=0;c<col;c++)
        {
            scanf("%d",&second[r][c]);
        }
    }
    for(r=0;r<row;r++)
    {

        for(c=0;c<col;c++)
        {
            sum[r][c] = first[r][c]+second[r][c];
        }
    }
    printf("the sum of two matrix is\n");

    for(r=0;r<row;r++)
    {
        for(c=0;c<col;c++)
        {
            printf("%d\t",sum[r][c]);
        }
    }
}
