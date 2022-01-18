#include <stdio.h>
void main()
{
    int n, i, arr[100], ind, ele;
    printf("enter how many elements you want to put into an array\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter %d element\n", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    { 
        
        printf("element at %dth index is %d\n", i, arr[i]);
    }

    
    printf("\nenter the index of which you want to delete the element\n");
    scanf("%d", &ind);
    
    for (i = ind; i < n - 1; i++)
    {
        arr[i] = arr[i + 1]; 
    }
    printf("final array after deletion is\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("element at %dth index is %d\n", i, arr[i]);
    }
}