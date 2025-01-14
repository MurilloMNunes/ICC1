#include <stdio.h>
#include <stdlib.h>
#define MAX1 4
#define MAX2 5

int main()
{
    int i, j, mat[MAX1][MAX2], soma[MAX2], somaaux;

    for(i=0;i<MAX1;i++)
    {
        for(j=0;j<MAX2;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    for(j=0;j<MAX2;j++)
    {
        somaaux = 0;

        for(i=0;i<MAX1;i++)
        {
            somaaux = somaaux + mat[i][j];
        }

        soma[j] = somaaux;
    }

    for(i=0;i<MAX2;i++){
    printf("%d ",soma[i]);}

    return 0;
}
