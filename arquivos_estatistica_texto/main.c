#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define MAX 30

typedef struct{
char nome[MAX];
char sexo;
int idade;
}registros;

int main()
{
    FILE *arq;
    registros *reg = (registros*)malloc(sizeof(registros));
    int i=0, tam=0, soma=0, m=0, h=0, somaidm=0, somaidh=0;
    float med, medm, medh;

    arq = fopen("dados.txt","r");
    assert(arq);

    do{
        reg = (registros*)realloc(reg,(tam+1)*sizeof(registros));
        fscanf(arq,"%s %c %d\n",reg[i].nome,&reg[i].sexo,&reg[i].idade);
        soma = soma + reg[i].idade;

        if(reg[i].sexo=='m')
        {
            m++;
            somaidm = somaidm + reg[i].idade;
        }
        else
        {
            h++;
            somaidh = somaidh + reg[i].idade;
        }

        i++;
        tam++;
      }while(!feof(arq));

      med = (float) soma/tam;
      medh = (float) somaidh/h;
      medm = (float) somaidm/m;


    printf("%d %d %d %.2f %.2f %.2f",tam,m,h,med,medm,medh);
    fclose(arq);
    return 0;
}
