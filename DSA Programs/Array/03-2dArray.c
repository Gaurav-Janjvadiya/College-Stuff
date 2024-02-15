//how to get input from user in 2D array and print them;
#include <stdio.h>

void main()
{
    int array[3][5];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("\nEnter value of array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("array[%d][%d] : %d \t",i,j,array[i][j]);
        }
        printf("\n");
    }
}