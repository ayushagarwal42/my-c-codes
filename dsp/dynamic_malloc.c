#include<stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n,i;
    //use of malloc
    printf("enter the size of the array you want to create\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("enter the value no. %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("the value at %d of this array is %d\n",i,ptr[i]);
    }
    //use of realloc
    printf("enter the size of the new array you want to create\n");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("enter the new value no. %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("the new value at %d of this array is %d\n",i,ptr[i]);
    }free(ptr);
   return 0;
}