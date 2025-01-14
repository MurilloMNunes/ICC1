#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main()
{
    int i, j, mat[MAX][MAX], aux;

    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            if(i==j)
            {
                aux = mat[i][j];
                mat[i][j] = mat[i][4-i];
                mat[i][4-i] = aux;
            }
        }
    }

    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            printf("%d",mat[i][j]);
            if((j!=MAX-1))
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
