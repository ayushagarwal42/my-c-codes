#include <stdio.h>

int linearSearch(int arr[], int n, int size, int i)
{
    if (i <= size)
    {
        if (arr[i] == n)
        {
            printf("Found at index %d\n", i);
        }
        else
        {
            if (arr[size] == n)
            {
                printf("Found at index %d\n", size);
            }
            else
            {
                i++;
                size--;
                linearSearch(arr, n, size, i);
            }
        }
    }
    else
    {
        printf("not found");
    }
    return 0;
}

void main()
{
    int arr[100], n, i, size;
    printf("\n");
    printf("enter the size of array: ");
    scanf("%d", &size);
    printf("enter elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the number to be searched: ");
    scanf("%d", &n);
    linearSearch(arr, n, size - 1, 0);
}