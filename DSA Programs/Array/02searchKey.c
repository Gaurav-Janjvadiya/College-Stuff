#include <stdio.h>

void main()
{
    int array[10];
    int key;
    for(int i=0;i<10;i++)
    {
        printf("\nEnter value at index %d : ",i);
        scanf("%d",&array[i]);
    }
    printf("\nEnter the value, you want to search : ");
    scanf("%d",&key);
    for(int i=0;i<10;i++)
    {
        if(array[i] == key)
        {
            printf("\nThe value %d is on index %d.\n",key,i);
            break;
        }
    }
}