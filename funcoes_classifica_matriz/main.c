#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int esparsa(int mat[MAX][MAX], int m)
{
    int cont = 0, cont0=0, i, j;

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cont++;

            if(mat[i][j]==0)
            {
                cont0++;
            }
        }

    }

    if(cont0>=(cont/2))
        return printf("SIM");

    else
        return printf("NAO");

}

int ident(int mat[MAX][MAX], int m)
{
    int cont0 = 0, cont1=0, i, j;


    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                if(mat[i][j]==1)
                cont1++;
            }

            else
            {
                if(mat[i][j]==0)
                cont0++;
            }
        }
    }


    if((cont1 + cont0)==(m*m))
        return printf("SIM");

    else
        return printf("NAO");

}

int simetrica(int mat[MAX][MAX], int m)
{
    int cont = 0, i, j;

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(mat[i][j]==mat[j][i])
            {
                cont++;
            }
        }
    }


    if(cont==(m*m))
        return printf("SIM");

    else
        return printf("NAO");

}

int main()
{
    int mat[MAX][MAX], op, i, j, m;

    scanf("%d",&m);

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d ",&mat[i][j]);
        }
    }

    scanf("%d",&op);

    if(op==1)
        esparsa(mat,m);

    if(op==2)
        ident(mat,m);

    if(op==3)
        simetrica(mat,m);

    return 0;
}
