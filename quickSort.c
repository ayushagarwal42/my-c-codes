#include <stdio.h>

void display(int a, int n)
{
    printf("Sorted Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (a[i] <= pivot) //    A[i] > pivot so stop otherwise i++
        {
            i++;
        }

        while (a[j] > pivot) //      A[j] <= pivot so stop otherwise j--
        {
            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    // Swap A[low] and A[j]
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}

void quickSort(int a[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition
    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        quickSort(a, low, partitionIndex - 1);  // sort left subarray
        quickSort(a, partitionIndex + 1, high); // sort right subarray
    }
}

void main()
{
    int a[100];
    int n, i;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("enter elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quickSort(a, 0, n - 1);
    display(a, n);
}
