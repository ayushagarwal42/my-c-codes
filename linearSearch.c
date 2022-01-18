#include <stdio.h>
void main()
{
    int n, i, arr[100], ele;
    // int count = 0;   taking count for multiple occurence of elements.
    printf("enter how many elements you want in array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the element you want to search: ");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            printf("element found at %d index\n", i);
            break;//remove break statement if counting multiple occurence of elements.
            // count++;
        }
    }
    if (i==n)// count == 0
        printf("%d not found in the array\n", ele);
    // else
        // printf("%d is present %d times in array\n", ele, count);
}