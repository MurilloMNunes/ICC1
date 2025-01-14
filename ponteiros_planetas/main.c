#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

int calc();

int main()
{
    int tempo, dias, horas, min, seg;
    char planeta[MAX];

    scanf("%d %s",&tempo,planeta);

    calc(planeta,tempo,&dias,&horas,&min,&seg);

    printf("%d segundos no planeta %s equivalem a:\n%d dias, %d horas, %d minutos e %d segundos\n",tempo,planeta,dias,horas,min,seg);
    return 0;
}

int calc(char plan[MAX], int tempo, int *dias, int *horas, int *min, int *seg)
{
    if((strcmp(plan,"Terra"))==0)
    {
        *horas = (tempo/3600)%24;
        *dias = tempo/86400;
        *min = (tempo/60)%60;
        *seg = tempo%60;
    }

    if((strcmp(plan,"Venus"))==0)
    {
        *horas = (tempo/3600)%5832;
        *dias = tempo/(86400*243);
        *min = (tempo/60)%60;
        *seg = tempo%60;
    }

    if((strcmp(plan,"Mercurio"))==0)
    {
        *horas = (tempo/3600)%1408;
        *dias = tempo/(86400*58.7);
        *min = (tempo/60)%60;
        *seg = tempo%60;
    }


     if((strcmp(plan,"Jupiter"))==0)
     {
        *horas = (tempo/3576)%10;
        *dias = tempo/35760;
        *min = ((tempo%35760)/60)%60;
        *seg = tempo%60;
     }

    return 0;
}
