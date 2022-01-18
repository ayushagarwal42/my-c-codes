#include <stdio.h>
// function to find factorial of given number
int factorial(int n)
{
	int res = 1, i;
	for (i = 2; i <= n; i++)
		res *= i;
	return res;
}

void main()
{
	int num;
    printf("enter no.");
    scanf("%d", &num);
	printf("Factorial of %d is %d", num, factorial(num));
}
