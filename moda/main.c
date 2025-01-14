#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moda, i, x[4], n0=0, n1=0, n2=0, n3=0;

    for(i=0;i<4;i++)
    {
        scanf("%d",&x[i]);

        if(i==0)
        {
            n0 = x[i];
        }

        if(i==1)
        {
            n1 = x[i];
        }

        if(i==2)
        {
            n2 = x[i];
        }

        if(i==3)
        {
            n3 = x[i];
        }
    }


        if(n0==n1 || n0==n2 || n0==n3)
        {
            moda = n0;
        }

        if(n1==n0 || n1==n2 || n1==n3)
        {
            moda = n1;
        }

        if(n2==n2 || n2==n1 || n2==n3)
        {
            moda = n2;
        }

        if(n3==n1 || n3==n2 || n3==n0)
        {
            moda = n3;
        }

    printf("%d",moda);

    return 0;
}

