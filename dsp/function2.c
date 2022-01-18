// with arguments and without return value.
#include<stdio.h>
void sum(int a,int b){
   printf("sum= %d",a+b);
}

void main(){

    int a=9,b=10;
    sum(a,b);//call of sum function
}
