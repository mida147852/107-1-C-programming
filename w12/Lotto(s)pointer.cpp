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
    Lotto *plottos[MAX];
    srand(time(NULL));
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        plottos[i]=(Lotto *)malloc(sizeof(struct Lotto));
        plottos[i]->date.year=rand()%11+2010;
        plottos[i]->date.month=rand()%12+1;
        plottos[i]->date.day=rand()%31+1;
        printf("%d/%02d/%02d  ",plottos[i]->date.year,plottos[i]->date.month,plottos[i]->date.day);
        for(int j=0; j<6; j++)
        {
            plottos[i]->num[j]=rand()%49+1;
            do
            {
                plottos[i]->num[j]=rand()%49+1;
            }
            while(duplicate(plottos[i]->num,j));

            printf("%02d ",plottos[i]->num[j]);
        }
        printf("\n");
    }
}
