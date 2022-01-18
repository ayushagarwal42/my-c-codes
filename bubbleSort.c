#include <stdio.h>

void bubbleSort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        printf("pass no. %d\n",i+1);
        for (j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
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
    printf("enter elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bubbleSort(a, n);
    display(a, n);
}
