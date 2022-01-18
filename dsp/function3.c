// without arguments and with return value.
#include<stdio.h>
int number(){
    int i;
    printf("enter a number");
    scanf("%d", &i);
    return i;
    /*
      if we have return i in this number function 
      this means that in main function we can or have to 
      initialize a variable like int d;
      and assigning the value of function to that variable like d=number();
      and print that variable for knowing what is stored in that variable
    */
}

void main(){

    int d;
    d=number();
    printf("number %d",d);
}
