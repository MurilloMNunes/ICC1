#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main()
{
    int n[MAX], tam, i, maior, menor;

    scanf("%d ", &tam);

    scanf("%d",&n[0]);
    maior = n[0];
    menor = n[0];

    for(i=1;i<tam;i++)
    {
        scanf("%d",&n[i]);

        if(n[i]>maior)
        {
            maior = n[i];
        }

        if(n[i]<menor)
        {
            menor = n[i];
        }
    }


    printf("%d %d", maior, menor);

    return 0;
}
