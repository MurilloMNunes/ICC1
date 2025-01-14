#include <stdio.h>
#include <stdlib.h>
#define MAX 10

float media(float dados[MAX])
{
    int i;
    float soma=0;

    for(i=0;i<MAX;i++)
    {
        soma = soma + dados[i];
    }

    return soma/10;
}

float desv_med_abs(float dados[MAX],float med)
{
    int i;
    float desvio=0;

    for(i=0;i<MAX;i++)
    {
        if((dados[i] - med)<0)
        {
            desvio = desvio - (dados[i] - med);
        }

        if((dados[i] - med)>=0)
        {
            desvio = desvio + (dados[i] - med);
        }
    }

    return desvio/10;
}

int main()
{
    int i;
    float dados[MAX];
    float med;

    for(i=0;i<MAX;i++)
    {
        scanf("%f",&dados[i]);
    }

    med = media(dados);

    printf("%.2f",desv_med_abs(dados,med));

    return 0;
}
