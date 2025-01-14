#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int soma_par(int v[MAX])
{
    int soma = 0, i;

    for(i=0;i<MAX;i++)
    {
        if((v[i]%2)==0)
        {
            soma = soma + v[i];
        }
    }

    return soma;
}

int main()
{
    int num[MAX], i;

    for(i=0;i<MAX;i++)
    {
        scanf("\n%d",&num[i]);
    }

    printf("A soma dos numeros pares = %d",soma_par(num));

    return 0;
}
