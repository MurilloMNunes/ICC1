#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int main()
{
    int mat[MAX][MAX], i, j, det=0;

    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    det = ((mat[0][0]*mat[1][1]*mat[2][2])+(mat[0][1]*mat[1][2]*mat[2][0])+(mat[0][2]*mat[1][0]*mat[2][1]));
    det = det - ((mat[0][2]*mat[1][1]*mat[2][0])+(mat[2][1]*mat[1][2]*mat[0][0])+(mat[0][1]*mat[1][0]*mat[2][2]));

    printf("%d",det);

    return 0;
}
