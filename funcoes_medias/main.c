#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int arit(float notas[MAX])
{
    int i;
    float media, soma=0;

    for(i=0;i<MAX;i++)
    {
        soma = soma + notas[i];
    }

    media = (float)soma/5;

    if(media>=5)
        return printf("%.2f\nAPROVADO",media);

    if((media>=3) && (media<5))
        return printf("%.2f\nREC",media);

    if(media<3)
        return printf("%.2f\nREPROVADO",media);

    return 0;
}

int pond(float notas[MAX], float pesos[MAX])
{
    int i;
    float media, soma=0,soma2=0;

    for(i=0;i<MAX;i++)
    {
        soma = soma + (notas[i]*pesos[i]);
    }

    for(i=0;i<MAX;i++)
    {
        soma2 = soma2 + pesos[i];
    }

    media = (float) soma/soma2;

    if(media>=5)
        return printf("%.2f\nAPROVADO",media);

    if((media>=3) && (media<5))
        return printf("%.2f\nREC",media);

    if(media<3)
        return printf("%.2f\nREPROVADO",media);

    return 0;
}

int harm(float notas[MAX])
{
    int i;
    float media, soma=0;

    for(i=0;i<MAX;i++)
    {
        soma = soma + (1/notas[i]);
    }

    media = (float) 5/(float) soma;

    if(media>=5)
        return printf("%.2f\nAPROVADO",media);

    if((media>=3) && (media<5))
        return printf("%.2f\nREC",media);

    if(media<3)
        return printf("%.2f\nREPROVADO",media);

    return 0;
}

int main()
{
    float notas[MAX], pesos[MAX];
    int i, tipo;

    for(i=0;i<MAX;i++)
    {
        scanf("%f",&notas[i]);
    }

    scanf("%d",&tipo);

    if(tipo==1)
        arit(notas);

    if(tipo==2)
    {
        for(i=0;i<MAX;i++)
        {
            scanf("%f",&pesos[i]);
        }

        pond(notas,pesos);
    }

    if(tipo==3)
        harm(notas);

    /*if(media>=5)
        printf("%f\nAPROVADO",media);

    if((media>=3) && (media<5))
        printf("%f\nREC",media);

    if(media<3)
        printf("%f\nREPROVADO",media);

    printf("Hello world!\n");*/
    return 0;
}



