#include <stdio.h>
#include <stdlib.h>
#define max 20

int main()
{
    int i, a[max];

    for(i=0;i<max;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=19;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
