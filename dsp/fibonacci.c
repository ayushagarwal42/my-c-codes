#include <stdio.h>
void main()
{
    int i, n;
    int f[100];
    printf("enter how many fibonacci number series you want to see\n");
    scanf("%d", &n);

    f[0] = 0;
    f[1] = 1;
    printf("%d ",f[0]);
    printf("%d ",f[1]);
    for (i = 2; i < n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        printf("%d ", f[i]);
    }
}