#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void leiaMAT(int mat[MAX][MAX], int m, int n)
{
    int i, j;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
}

void prodMAT(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int m, int p, int n)
{
    int i, j, k;

    for(i=0;i<m;i++)
    {
        for(k=0;k<p;k++)
        {
            result[i][k] = 0;

            for(j=0;j<n;j++)
            {
                result[i][k] = result[i][k] + mat1[i][j]*mat2[j][k];
            }

        }
    }
}

void imprimeMAT(int mat[MAX][MAX], int m, int n)
{
    int i, j;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

}

int main()
{
    int mat1[MAX][MAX], mat2[MAX][MAX], res[MAX][MAX], m, n, p;

    scanf("%d %d",&m,&n);

    leiaMAT(mat1,m,n);

    scanf("%d %d",&n,&p);
    leiaMAT(mat2,n,p);

    prodMAT(mat1,mat2,res,m,p,n);

    imprimeMAT(res,m,p);

    return 0;
}
