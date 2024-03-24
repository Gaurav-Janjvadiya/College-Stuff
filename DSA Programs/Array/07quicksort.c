#include <stdio.h>

int n;
int a[100];
/* BITTU NO CODE */
void quickSort(int a[], int left, int right)
{
    int l = left;
    int r = right;
    int pivot = a[left];
    while (left < right)
    {
        while ((a[right] >= pivot) && (right > left))
            right--;
        if (left != right)
        {
            a[left] = a[right];
            left++;
        }
        while ((a[left] <= pivot) && (left < right))
            left++;
        if (left != right)
        {
            a[right] = a[left];
            right--;
        }
    }
    a[left] = pivot;
    pivot = left;
    left = l;
    right = r;
    if (left < pivot)
        quickSort(a, left, pivot - 1);
    if (right > pivot)
        quickSort(a, pivot + 1, right);
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
