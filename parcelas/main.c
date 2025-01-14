#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fat(int quant)
{
    int i, res;

    for(i=quant-1;i>1;i--)
    {
        res = res*i;
    }

    return res;
}

int main()
{
    float x, res=0;
    int i, aux=0, n;

    scanf("%f %d", &x, &n);

    for(i=0;i<n;i=i+2)
    {
        res = res + (pow(-1,aux)*pow(x,2*i))/fat(2*aux + 1);
        printf("%f",res);
        aux++;
    }

    printf("%f",res);


    return 0;
}
