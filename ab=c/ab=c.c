#include <stdio.h>
#include <stdlib.h>
#define max 100
int main()
{
    int m, n, a[max][max], b[max], aux=0, i, j;
    float c[max];

    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }

    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            aux = aux + a[i][j]*b[j];
        }
        c[i] = aux;
        aux = 0;

    }


    for(i=0;i<m;i++)
    {
        printf("%f\n",c[i]);
    }

    return 0;
}
