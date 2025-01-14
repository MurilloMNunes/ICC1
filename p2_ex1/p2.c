#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

void maior_val();
void media();
void variancia();

int main()
{
    int n, i;
    double vet[MAX], vmaior=0, vmedia=0, vvariancia=0;

    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&vet[i]);
    }

    maior_val(vet,&vmaior,n);
    media(vet,&vmedia,n);
    variancia(vet,&vvariancia,n);

    printf("Maior: %.2f\n",vmaior);
    printf("Media: %.2f\n",vmedia);
    printf("Variancia: %.2f\n",vvariancia);
    return 0;
}

void maior_val(double val[MAX], double *maior, int num)
{
    int i;

    *maior = val[0];

    for(i=1;i<num;i++)
    {
        if(val[i]>*maior)
        {
            *maior = val[i];
        }
    }
}

void media(double val[MAX], double *media, int num)
{
    double soma = 0;
    int i;

    for(i=0;i<num;i++)
    {
        soma = soma + val[i];
    }

    *media = soma/num;
}

void variancia(double val[MAX], double *var, int num)
{
    double med=0, desv, soma;
    int i;

    media(val,&med,num);

    for(i=0;i<num;i++)
    {
        desv = val[i] - med;
        soma = soma + pow(desv,2);
    }

    *var = soma/num;
}
