#include <stdio.h>
#include <stdlib.h>
#define max 20
int main()
{
    int tam, i;
    float prod=0, x[max], y[max];

    scanf("%d",&tam);

    for(i=0;i<tam;i++)
    {
        scanf("%f",&x[i]);
    }

    for(i=0;i<tam;i++)
    {
        scanf("%f",&y[i]);
    }

    for(i=0;i<tam;i++)
    {
        prod = prod + (x[i]*y[i]);
    }

    printf("%.2f",prod);

    return 0;
}
