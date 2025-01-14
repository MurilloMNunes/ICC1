#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int soma_par(int v[MAX])
{
    int soma = 0, i;

    for(i=0;v[i]!=(-1);i++)
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
        scanf("%d",&num[i]);
        if(num[i]==(-1))
        {
            break;
        }
    }

    printf("%d",soma_par(num));

    return 0;
}

