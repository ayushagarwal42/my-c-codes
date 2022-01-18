#include <stdio.h>

int insertionSort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    return 0;
}

void display(int a[], int n)
{
    printf("Sorted Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void main()
{
    int a[100];
    int n, i;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("enter elements to insert\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    insertionSort(a, n);
    display(a, n);
}
