#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void lerMat(int mat[MAX][MAX]);

int main()
{
    int jog, tab[MAX][MAX], i, j, pont=0;

    scanf("%d",&jog);

    lerMat(tab);

    if(jog==1)
    {
        for(j=0;j<MAX;j++)
    {
        for(i=0;i<MAX-2;i++)
        {
            if((tab[i][j] + tab[i+1][j] + tab[i+2][j])==1)
            pont = pont + 10;

            if(((tab[i][j] + tab[i+1][j] + tab[i+2][j])==2) && ((tab[i][j]!=2) && (tab[i+1][j]!=2) && (tab[i+2][j]!=2)))
            pont = pont + 50;
        }
    }
    }

    if(jog==2)
    {
        for(j=0;j<MAX;j++)
    {
        for(i=0;i<MAX-2;i++)
        {
            if(((tab[i][j] + tab[i+1][j] + tab[i+2][j])==2) && ((tab[i][j]!=1) && (tab[i+1][j]!=1) && (tab[i+2][j]!=1)))
            pont = pont + 10;

            if((tab[i][j] + tab[i+1][j] + tab[i+2][j])==4  && ((tab[i][j]!=1) && (tab[i+1][j]!=1) && (tab[i+2][j]!=1)))
            pont = pont + 50;
        }
    }
    }


    printf("%d",pont);
    return 0;
}

void lerMat(int mat[MAX][MAX])
{
    int i, j;

    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
}
