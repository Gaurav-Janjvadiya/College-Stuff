#include <stdio.h>

void main()
{
    int array[10];
    int min = array[0];

    for(int i=0;i<10;i++)
    {
        printf("\nEnter value at index %d : ",i);
        scanf("%d",&array[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }

    printf("\n\nThe smallest value is %d in array.\n\n",min);
}