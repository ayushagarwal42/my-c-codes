#include <stdio.h>
int main()
{
   int age, py, by;
   printf("enter your age\n");
   scanf("%d", &age);
   printf("you are %d yrs old\n\n", age);
   printf("enter present year\n");
   scanf("%d", &py);
   printf("you entered %d as your present year\n\n", py);
   by = py - age;
   printf("you are born in the year %d\n\n", by);

   return 0;
}