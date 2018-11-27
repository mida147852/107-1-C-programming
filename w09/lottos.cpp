#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 100

struct Date
{
    int year;
    int month;
    int day;
};
struct Lotto
{
    Date date;
    int num[6];
};
int duplicate(int num[],int j)
{
    int m=0;
    for(int i=1; i<j; i++){
        if (num[j] == num[i]) m=1;
    }
    return m;

}
int main()
{
    int n;
    int temp;
    Lotto lotto;
    Lotto lottos[MAX];
    srand(time(NULL));
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        lottos[i].date.year=rand()%11+2010;
        lottos[i].date.month=rand()%12+1;
        lottos[i].date.day=rand()%31+1;
        printf("%d/%02d/%02d  ",lottos[i].date.year,lottos[i].date.month,lottos[i].date.day);
        for(int j=0; j<6; j++)
        {
            lottos[i].num[j]=rand()%49+1;
            do
            {
                lottos[i].num[j]=rand()%49+1;
            }
            while(duplicate(lottos[i].num,j));

            printf("%02d ",lottos[i].num[j]);
        }
        printf("\n");
    }
}
