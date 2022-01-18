#include <stdio.h>

void display(int arr[], int n)
{
    printf("Sorted Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;
    // If right child is larger than root
    if (right < n && arr[right] > arr[largest])
        largest = right;
    //Swap and continue heapifying if root is not largest
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        // int temp = arr[i];
        // arr[i] = arr[largest];
        // arr[largest] = temp;

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    //Build max heap
    for (int i = (n / 2) - 1; i >= 0; i--)
        heapify(arr, n, i);

    //Heap sort
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);// arr[0] will always be the largest so swap it with the last node arr[i]
        // int temp = arr[0];
        // arr[0] = arr[i];
        // arr[i] = temp;

        //Heapify root element to get highest element at root again
        heapify(arr, i, 0);
    }
}



void main()
{
    int arr[100];
    int n, i;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("enter elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    heapSort(arr, n);
    display(arr, n);
}