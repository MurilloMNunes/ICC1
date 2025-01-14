#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, r, i, x[10], quant=0;

    scanf("%d %d",&l,&r);

    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
        if((x[i]>=l) && (x[i]<=r))
        {
            quant++;
        }
    }

    printf("%d",quant);

    return 0;
}
