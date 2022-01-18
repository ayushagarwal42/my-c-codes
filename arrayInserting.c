#include <stdio.h>
void main()
{
    int n, i, arr[100], ind, ele;
    printf("enter how many elements you want to put into an array\n");//1st requirement
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {//by the help of for loop we add elements in our array
        printf("enter %d element\n", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {//confirming that the element we have entered is correct or not
    //checking index of every element in our array
        printf("element at %dth index is %d\n", i, arr[i]);
    }
    //then deciding at what index we have to insert our new element
    printf("\nenter the index where you want to insert an element\n");
    scanf("%d", &ind);
    printf("enter the element you want to insert at this index\n");
    scanf("%d", &ele);
    //then run a loop from tha last index that is (n-1)
    //till the index on which we want to insert our new element
    for (i = n - 1; i >= ind; i--)
    {
        arr[i + 1] = arr[i];//updating elements to their +1 index locations
    }//by this size of array is not increasing
    //but we are making that index empty on which we want our new element to be there
    arr[ind] = ele;//putting newly entered element at that index location

    printf("final array after insertion at %d index is\n", ind);
    for (i = 0; i < n + 1; i++)
    {
        printf("element at %dth index is %d\n", i, arr[i]);
    }
}