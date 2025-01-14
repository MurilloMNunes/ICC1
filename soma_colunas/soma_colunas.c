#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int main()
{
    int a[MAX][MAX], b[MAX], aux=0, i, j;

    for(i=0;i<=3;i++)
    {
        for(j=0;j<=4;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }

    for(j=0;j<=4;j++)
    {
        for(i=0;i<=3;i++)
        {
            aux = aux + a[i][j];
        }
        b[j] = aux;
        aux = 0;

    }

    printf("%d %d %d %d %d",b[0],b[1],b[2],b[3],b[4]);


    //for(j=0;j<=4;i++)
    {
        //printf("%d",b[j]);
    }

    return 0;
}
