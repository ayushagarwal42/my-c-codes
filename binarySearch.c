#include <stdio.h>
void main()
{
    int i, first, last, middle, n, search, array[100];

    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("Enter value to find\n");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (array[middle] < search)
        {
            first = middle + 1;
        }
        else if (array[middle] == search)
        {
            printf("%d found at index %d.\n", search, middle);
            break;
        }
        else
        {
            last = middle - 1;
        }
    middle = (first + last) / 2;
    }

    if (first > last)//when while loop condition gets false then directly jump to this if condition
    {
        printf("Not found! %d isn't present in the list.\n", search);
    }
}