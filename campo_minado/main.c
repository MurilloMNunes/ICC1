#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void camp_min();

int main()
{
    int i, j, n, m;
    char matriz[MAX][MAX];

    scanf("%d %d", &n,&m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf(" %c",&matriz[i][j]);
        }
    }

    camp_min(matriz,n,m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(matriz[i][j]==46){
            matriz[i][j] = 48;}
            printf("%c ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void camp_min(char mat[MAX][MAX], int l, int c)
{
    int i, j, lin, col;

    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            if(mat[i][j]==42)
            {
                for(lin=i-1;lin<=i+1;lin++)
                {
                    if((lin<0)||(lin>l-1)){
                    continue;}
                    for(col=j-1;col<=j+1;col++)
                    {
                        if((col<0)||(col>c-1)){
                        continue;}
                        if(mat[lin][col]==42){
                            continue;}

                        if(mat[lin][col]==46){
                        mat[lin][col] = 48;}

                        if((mat[lin][col]!=46) && (mat[lin][col]!=42)){
                        mat[lin][col] = mat[lin][col] + 1;}

                        //printf("%c ",mat[lin][col]);
                    }
                }


            }
            }

    }
}
