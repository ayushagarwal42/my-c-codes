#include <stdio.h>

int binarySearch(int arr[], int n, int element)
{
    int low, mid, high;
    low = 0;
    high = n - 1;
    // Keep searching until low <= high
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

void main()
{

    int arr[100];
    int n, i, element;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search\n");
    scanf("%d", &element);

    int searchIndex = binarySearch(arr, n, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
}
