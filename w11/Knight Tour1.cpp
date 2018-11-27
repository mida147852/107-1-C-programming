#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void prArr(int m[][8])
{
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            printf("%2d ",m[i][j]);
        }
        printf("\n");
    }
}
struct Pos
{
    int col;
    int row;
};

Pos findNextPos(int m[][8],int row,int col)
{
    int v[8]= {-1,-2,-2,-1,1,2,2,1};
    int h[8]= {2,1,-1,-2,-2,-1,1,2};
    Pos pos;
    int nextRow,nextCol;
    for(int i=0; i<8; i++)
    {
        nextRow= row+v[i];
        nextCol= col+h[i];

        if(nextRow>=0&&nextRow<=7&&nextCol>=0&&nextCol<=7&&m[nextRow][nextCol]==0)
        {
            pos.row=nextRow;
            pos.col=nextCol;
            return pos;
        }
    }
    pos.col=-1;
    pos.row=-1;
    return pos;
};




int main()
{
    int m[8][8]= {0};
    Pos pos;
    srand(time(NULL));
    int row=rand()%8;
    int col=rand()%8;
    m[row][col]=1;
    for(int i=2; i<=64; i++)
    {
        pos=findNextPos(m,row,col);
        m[pos.row][pos.col]=i;
        row=pos.row;
        col=pos.col;
        if(pos.row==-1&&pos.col==-1)
        {
            prArr(m);
            printf("\nTotal move =%d\n",i-1);
            break;

        }
    }

}
