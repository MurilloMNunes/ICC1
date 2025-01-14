#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int main()
{
    char mat[MAX][MAX];
    int i, j, cont=0;

    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            scanf(" %c",&mat[i][j]);
        }
    }

    for(i=0;i<MAX;i++)
    {
        if((mat[i][0]==mat[i][1]) && (mat[i][1]==mat[i][2]))
        {
            if(mat[i][0]=='x')
            {
                printf("x ganhou");
                cont++;
            }

            if(mat[i][0]=='o')
            {
                printf("o ganhou");
                cont++;
            }
        }
    }

    for(i=0;i<MAX;i++)
    {
        if((mat[0][i]==mat[1][i]) && (mat[1][i]==mat[2][i]))
        {
            if(mat[0][i]=='x')
            {
                printf("x ganhou");
                cont++;
            }

            if(mat[0][i]=='o')
            {
                printf("o ganhou");
                cont++;
            }
        }
    }

        if((mat[0][0]==mat[1][1]) && (mat[1][1]==mat[2][2]))
        {
            if(mat[0][0]=='x')
            {
                printf("x ganhou");
                cont++;
            }

            if(mat[0][0]=='o')
            {
                printf("o ganhou");
                cont++;
            }
        }

        if((mat[0][2]==mat[1][1]) && (mat[1][1]==mat[2][0]))
        {
            if(mat[0][2]=='x')
            {
                printf("x ganhou");
                cont++;
            }

            if(mat[0][2]=='o')
            {
                printf("o ganhou");
                cont++;
            }
        }

    if(cont==0)
        printf("empate");

    return 0;
}
