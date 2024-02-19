#include <stdio.h>

void main()
{
    int r;
    int c;

    printf("Enter number of row and coulumn : ");
    scanf("%d %d",&r,&c);

    int array[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter value at array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nValue at array[%d][%d] is : %d ",i,j,array[i][j]);
        }
        printf("\n");
    }
}