#include<stdio.h>

int factorial(int num){
    // if((n==1||n==0))
    // if(n==1)
    if(num<=1){
        return 1;
    }
    else{
        return(num*factorial(num-1));
    }
}


int main(){
    int num,c;
    printf("enter the no. you want factorial of ");
    scanf("%d",&num);
    c=factorial(num);
    // printf("Factorial of %d is %d", num,factorial(num));
    printf("%d",c);
    return 0;
}


