#include <stdio.h>
#include <stdlib.h>
#define max 20

int main()
{
    int m, n, i, j;
    float  a[max][max], b[max][max];

    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%f",&a[i][j]);
        }

    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i] = a[i][j];
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            printf("%f ",b[j][i]);
        }
        printf("\n");

    }

    return 0;
}
