#include <stdio.h>

void main()
{
    int array[5] = {1,2,3,4,5};
    int key;
    printf("Enter the value, you want to search : ");
    scanf("%d",&key);

    for(int i=0;i<5;i++)
    {
        if(array[i] == key)
        {
            printf("The value %d is on index %d.",key,i);
            break;
        }
    }
}