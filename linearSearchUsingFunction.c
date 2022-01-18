#include <stdio.h>

int linearSearch(int arr[], int n, int element){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==element){
            return i;
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

    int searchIndex = linearSearch(arr, n, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
}