#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
    int v[MAX], dif, mod, i, maior=0;

    for(i=0;i<MAX;i++)
    {
        scanf("%d", &v[i]);
    }

    for(i=0;i<MAX-1;i++)
    {
        dif = v[i+1] - v[i];
        mod = abs(dif);

        if(mod>maior)
        {
            maior = mod;
        }
    }

    printf("%d", maior);
    return 0;
}
