
#include <stdio.h>

int gcd(int a,int b)
{
    int c=0;
    for(int i=2;i<=a;i++){
        printf("%d,",i);
        if(a%i==0&&b%i==0)
            c=i;
        else
            c=c;
    }
    return c;
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
    return 0;
}
