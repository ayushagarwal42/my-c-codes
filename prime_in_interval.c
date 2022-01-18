#include <stdio.h>

void main()
{
    int a, b, i, j, flag;
    printf("Enter lower bound of the interval: ");
    scanf("%d", &a);
    printf("Enter upper bound of the interval: ");
    scanf("%d", &b);
    printf("Prime numbers between %d and %d are: ", a, b);
    // Traverse each number in the interval
    // with the help of for loop
    for (i = a; i <= b; i++)
    {
        if (i == 1 || i == 0)
        {
            continue;
        }

        flag = 1;

        for (j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("%d ", i);
    }
}
