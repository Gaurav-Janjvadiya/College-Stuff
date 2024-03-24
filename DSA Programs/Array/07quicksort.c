#include <stdio.h>

int n;
int a[100];
/* BITTU NO CODE :/
void quickSort(int a[], int left, int right)
{
    int l = left;
    int r = right;
    int pivot = a[left];
    while (left < right)
    {
        while ((a[right] >= pivot) && (right > left))
        {
            right--;
        }
        if (left != right)
        {
            a[left] = a[right];
            left++;
        }
        while ((a[left] <= pivot) && (left < right))
        {
            left++;
        }
        if (left != right)
        {
            a[right] = a[left];
            right--;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    a[left] = pivot;
    pivot = left;
    left = l;
    right = r;
    if (left < pivot)
    {
        quickSort(a, left, pivot - 1);
    }
    if (right > pivot)
    {
        quickSort(a, pivot + 1, right);
    }
}
*/

/*JENNY NO CODE :) */
int partition(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    int temp;
    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;
    return end;
}

void quickSort(int a[], int lb, int ub)
{
    int loc;
    if (lb < ub)
    {
        loc = partition(a, lb, ub);
        quickSort(a, lb, loc - 1);
        quickSort(a, loc + 1, ub);
    }
}

int main()
{
    printf("How many elements you want to enter ? : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    quickSort(a, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
