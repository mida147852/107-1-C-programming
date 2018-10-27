#include <stdio.h>


int Fib(int n)
{
    if(n==0||n==1)
        return n;
    else
        return Fib(n-1)+Fib(n-2);
}


int main()
{
    int n;
    printf("Fib(3)= %d \n",Fib(3));
    printf("Fib(10)= %d \n",Fib(10));
    printf("Fib(30)= %d \n",Fib(30));
}
