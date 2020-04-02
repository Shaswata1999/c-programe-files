/*basic pay 5000,DA is 50% of basic salary,gf and pf is 10% of basic salary HRA is 1000*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int bp,DA,HRA,gross_salary;

    printf("Enter the basic pay");
    scanf("%d",&bp);

    DA = 0.5*bp;
    HRA = 1000;
    gross_salary = bp+DA+HRA;

    printf("The Gross salary is %d",gross_salary);
}
