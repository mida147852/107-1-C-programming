#include <stdio.h>

void prchar(char c, int n)
{
    for(int i=1; i<=n; i++)
        printf("%c",c);
}

/*int main()
{
    int n1;
    scanf("%d",&n1);
    for(int i=1; i<=n1; i++)
    {
        prchar(' ',n1-i);
        prchar('*',i-1);
        printf("*  *");
        prchar('*',i-1);
        printf("\n");
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        prchar(' ',i-1);
        prchar('*',n1-i);
        printf("*  *");
        prchar('*',n1-i);
        printf("\n");
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        prchar('*',n1-i+1);
        prchar(' ',2*i-1);
        prchar('*',n1-i+1);
        printf("\n");
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        prchar('*',i);
        prchar(' ',2*(n1-i)+1);
        prchar('*',i);
        printf("\n");
    }
    prchar('-',3*n1);
    printf("\n");

    for(int i=1; i<=n1; i++)
    {
        prchar(' ',n1-i+1);
        prchar('*',2*i-1);
        prchar(' ',n1-i);
        printf("\n");
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        printf(" ");
        prchar(' ',i-1);
        prchar('*',2*(n1-i+1)-1);
        printf("\n");
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        if(i==1||i==n1)
        {
            prchar(' ',n1-i);
            prchar('*',i-1);
            printf("*  *");
            prchar('*',i-1);
            printf("\n");
        }
        else
        {
            prchar(' ',n1-i);
            printf("*");
            prchar(' ',i-2);
            printf("*  *");
            prchar(' ',i-2);
            printf("*");
            printf("\n");
        }
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        if(i==1||i==n1)
        {
            prchar('*',n1-i);
            prchar(' ',i-1);
            printf("*  *");
            prchar('*',n1-i);
            printf("\n");
        }
        else
        {
            prchar(' ',i-1);
            printf("*");
            prchar(' ',(n1-i)-1);
            printf("*  *");
            prchar(' ',(n1-i)-1);
            printf("*");
            printf("\n");
        }
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        if(i==1||i==n1)
        {
            printf("*");
            prchar('*',n1-i);
            prchar(' ',2*i-1);
            prchar('*',n1-i+1);
            printf("\n");
        }
        else
        {
            printf("*");
            prchar(' ',(n1-i)-1);
            printf("*");
            prchar(' ',2*i-1);
            printf("*");
            prchar(' ',(n1-i)-1);
            printf("*");
            printf("\n");
        }
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        if(i==1||i==n1)
        {
            printf(" ");
            prchar(' ',n1-i);
            prchar('*',2*i-1);
            printf("\n");
        }
        else
        {
            prchar(' ',n1-i+1);
            printf("*");
            prchar(' ',2*i-3);
            printf("*");
            printf("\n");
        }
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        if(i==1||i==n1)
        {
            printf(" ");
            prchar(' ',i-1);
            prchar('*',2*(n1-i)+1);
            printf("\n");
        }
        else
        {

            prchar(' ',i);
            printf("*");
            prchar(' ',2*(n1-i)-1);
            printf("*");
            printf("\n");
        }
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        if(i==1||i==n1)
        {
            printf("*");
            prchar('*',i-1);
            prchar(' ',2*(n1-i)+1);
            prchar('*',i);
            printf("\n");
        }
        else
        {
            printf("*");
            prchar(' ',i-2);
            printf("*");
            prchar(' ',2*(n1-i)+1);
            printf("*");
            prchar(' ',i-2);
            printf("*");
            printf("\n");
        }
    }
    return 0;
}
*/
int one(int n1,int filled)
{
    if(filled)
    {
        for(int i=1; i<=n1; i++)
        {
            prchar(' ',n1-i);
            prchar('*',i-1);
            printf("*  *");
            prchar('*',i-1);
            printf("\n");
        }
      printf("\n");
    }
    else
    {
        for(int i=1; i<=n1; i++)
        {
            if(i==1||i==n1)
            {
                prchar(' ',n1-i);
                prchar('*',i-1);
                printf("*  *");
                prchar('*',i-1);
                printf("\n");
            }
            else
            {
                prchar(' ',n1-i);
                printf("*");
                prchar(' ',i-2);
                printf("*  *");
                prchar(' ',i-2);
                printf("*");
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
int two(int n1,int filled)
{
    if(filled)
    {
        for(int i=1; i<=n1; i++)
        {
            prchar(' ',i-1);
            prchar('*',n1-i);
            printf("*  *");
            prchar('*',n1-i);
            printf("\n");
        }
        printf("\n");
    }
    else
    {
        for(int i=1; i<=n1; i++)
        {
            if(i==1||i==n1)
            {
                prchar('*',n1-i);
                prchar(' ',i-1);
                printf("*  *");
                prchar('*',n1-i);
                printf("\n");
            }
            else
            {
                prchar(' ',i-1);
                printf("*");
                prchar(' ',(n1-i)-1);
                printf("*  *");
                prchar(' ',(n1-i)-1);
                printf("*");
                printf("\n");
            }
        }
        printf("\n");
    }
}
int three(int n1,int filled)
{
    if(filled)
    {
        for(int i=1; i<=n1; i++)
        {
            prchar('*',n1-i+1);
            prchar(' ',2*i-1);
            prchar('*',n1-i+1);
            printf("\n");
        }
        printf("\n");
    }
    else
    {
        for(int i=1; i<=n1; i++)
        {
            if(i==1||i==n1)
            {
                printf("*");
                prchar('*',n1-i);
                prchar(' ',2*i-1);
                prchar('*',n1-i+1);
                printf("\n");
            }
            else
            {
                printf("*");
                prchar(' ',(n1-i)-1);
                printf("*");
                prchar(' ',2*i-1);
                printf("*");
                prchar(' ',(n1-i)-1);
                printf("*");
                printf("\n");
            }
        }
        printf("\n");
    }
}
int four(int n1,int filled)
{
    if(filled)
    {
        for(int i=1; i<=n1; i++)
        {
            prchar('*',i);
            prchar(' ',2*(n1-i)+1);
            prchar('*',i);
            printf("\n");
        }
        printf("\n");
    }
    else
    {
        for(int i=1; i<=n1; i++)
        {
            if(i==1||i==n1)
            {
                printf("*");
                prchar('*',i-1);
                prchar(' ',2*(n1-i)+1);
                prchar('*',i);
                printf("\n");
            }
            else
            {
                printf("*");
                prchar(' ',i-2);
                printf("*");
                prchar(' ',2*(n1-i)+1);
                printf("*");
                prchar(' ',i-2);
                printf("*");
                printf("\n");
            }
        }
        printf("\n");
    }
}
int five(int n1,int filled)
{
    if(filled)
    {
        for(int i=1; i<=n1; i++)
        {
            prchar(' ',n1-i+1);
            prchar('*',2*i-1);
            prchar(' ',n1-i);
            printf("\n");
        }
        printf("\n");
    }
    else
    {
        for(int i=1; i<=n1; i++)
        {
            if(i==1||i==n1)
            {
                printf(" ");
                prchar(' ',n1-i);
                prchar('*',2*i-1);
                printf("\n");
            }
            else
            {
                prchar(' ',n1-i+1);
                printf("*");
                prchar(' ',2*i-3);
                printf("*");
                printf("\n");
            }
        }
        printf("\n");
    }
}
int six(int n1,int filled)
{
    if(filled)
    {
        for(int i=1; i<=n1; i++)
        {
            printf(" ");
            prchar(' ',i-1);
            prchar('*',2*(n1-i+1)-1);
            printf("\n");
        }
        printf("\n");
    }
    else
    {
        for(int i=1; i<=n1; i++)
        {
            if(i==1||i==n1)
            {
                printf(" ");
                prchar(' ',i-1);
                prchar('*',2*(n1-i)+1);
                printf("\n");
            }
            else
            {

                prchar(' ',i);
                printf("*");
                prchar(' ',2*(n1-i)-1);
                printf("*");
                printf("\n");
            }
        }
    }
}
int main()
{
    int n1,filled,choice;
    while(1)
    {
        printf("Main Menu\n");
        printf("1.◢ ◣\n \n");
        printf("2.◥ ◤\n \n");
        printf("3.◤ ◥\n \n");
        printf("4.◣ ◢\n \n");
        printf("5.  ▲  \n \n");
        printf("6.  ▼  \n \n");
        printf("7.exit\n ");
        printf("\n => ");
        scanf("%d",&choice);
        if(choice==7)break;
        switch(choice)
        {
        case 1:
            printf("Enter n1 and filled: ");
            scanf("%d %d",&n1,&filled);
            one(n1,filled);
            break;
        case 2:
            printf("enter n1 and filled: ");
            scanf("%d %d",&n1,&filled);
            two(n1,filled);
            break;
        case 3:
            printf("enter n1 and filled: ");
            scanf("%d %d",&n1,&filled);
            three(n1,filled);
            break;
        case 4:
            printf("enter n1 and filled: ");
            scanf("%d %d",&n1,&filled);
            four(n1,filled);
            break;
        case 5:
            printf("enter n1 and filled: ");
            scanf("%d %d",&n1,&filled);
            five(n1,filled);
            break;
        case 6:
            printf("enter n1 and filled: ");
            scanf("%d %d",&n1,&filled);
            six(n1,filled);
            break;
        }
    }
}

