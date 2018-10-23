#include <stdio.h>

int gcd(int a,int b)
{
    int c;
    while(1){
        c=a;
        a=b%c;
        b=c;
        if(a==0)break;
    }
    return b;
}

int rgcd(int a,int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}


int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("gcd(%d,%d)= %d \n",a,b,gcd(a,b));
    printf("rgcd(%d,%d)= %d \n",a,b,rgcd(a,b));
    return 0;
}
