#include <stdio.h>
#include <stdlib.h>
#define MAX1 2
#define MAX2 3

int main()
{
    int mat[MAX1][MAX2], i, j, x, y, z;

    for(i=0;i<MAX1;i++)
    {
        for(j=0;j<MAX2;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    x = (mat[0][1]*mat[1][2]) - (mat[1][1]*mat[0][2]);
    y = (mat[0][2]*mat[1][0]) - (mat[0][0]*mat[1][2]);
    z = (mat[0][0]*mat[1][1]) - (mat[0][1]*mat[1][0]);

    printf("%d %d %d",x,y,z);

    return 0;
}
