#include <stdio.h>

void main()
{
    // mari mathod
    // int arr[5] = {5, 4, 3, 2, 1};
    // int min;
    // int temp;
    // for (int i = 0; i < 5; i++)
    // {
    //     min = arr[i];
    //     temp = min;
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[j] < min)
    //         {
    //             min = arr[j];
    //         }
    //     }
    //     arr[i] = min;
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (min == arr[j])
    //         {
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    // bittu ni mathod
    int a[5] = {10, 27, 6, 42, 18};
    int temp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}