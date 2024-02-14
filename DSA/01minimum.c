#include <stdio.h>

void main()
{
    int array[5] = {5,4,3,2,1};
    int min = array[0];

    for(int i=0;i<5;i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }

    printf("The smallest value is %d in array.",min);
}