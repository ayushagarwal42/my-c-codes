#include <stdio.h>//header

int func3(int arr[][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value at %d,%d is %d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}

int main()
{
    int arr[][4] = {{2, 13}, {9, 3}, {10, 11}};
    func3(arr);
    return 0;
}