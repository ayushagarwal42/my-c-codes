/*Declaration , Definition and Call in functions.

A function is declared to tell a compiler about its existence.
A function is defined to get some task done.
A function is called in order to be used.
*/

// with arguments and with return value.
#include<stdio.h>
// int sum(int a,int b); this is declaration protype when sum function definition is after main function.
//while making user functions always declare functions before main or otherwise it will show implicit declaration of function.
int sum(int a,int b) //this is protype of declaring and definition at same place only before main function
{
    return a+b;    
}


int main()
{
    int a,b,c;
    a=9;
    b=10;
    c=sum(a,b);//call of sum function
    printf("sum= %d",c);
   
   return 0;
}
// int sum(int a,int b)
// {
    // return a+b;    
// }