//A prime number is a whole number greater than 1 whose only factors are 1 and itself.
//A factor is a whole number that can be divided evenly into another number.
//The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29.
//Numbers that have more than two factors are called composite numbers.
#include <math.h>
#include <stdio.h>
int main()
{
    int n, i, count = 1;
    printf("Enter a number: \n");
    scanf("%d", &n);
    for (i = 2; i <= sqrt(n); i++)
    {
        //If n is divisible by any number between 2 and n/2, it is not prime
        if (n % i == 0)
        {
            count = 0;//as input number is not prime number
            break;
        }
    }

    if (n <= 1)
        count = 0;//as input number is less than 2

    if (count == 1)//as input number is a prime number
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}
