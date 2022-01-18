#include <stdio.h>
void main()
{
    int prices[] = {1, 2, 3, 4, 5};
    // int size = sizeof prices / sizeof *prices;
    // int size = sizeof prices / sizeof prices[0];
    int size = sizeof(prices)/sizeof(int);
    printf("%d", size);
}