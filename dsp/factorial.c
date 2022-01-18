// C program to find factorial of given number
#include <stdio.h>

int factorial(int num)
{
	// single line to find factorial
	return (num == 1 || num == 0) ? 1 : num * factorial(num - 1);
}

void main()
{
	int num;
    printf("enter no.");
    scanf("%d", &num);
	printf("Factorial of %d is %d", num, factorial(num));
}