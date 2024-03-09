#include <stdio.h>

void main()
{
    int arr[5] = {5, 3, 2, 6, 1};

    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}