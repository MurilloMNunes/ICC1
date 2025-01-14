#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#define MAX 50

typedef struct{
char nome[MAX];
int idade;
char sexo;
float salario;
}registros;

int main()
{
    FILE *arq;
    registros *reg = (registros*)malloc(sizeof(registros));
    int i=0, tam=0, m=0, h=0;
    float med, medm, medh, soma=0, somasm=0, somash=0;

    arq = fopen("dados-funcionario.bin","rb");
    assert(arq);

    do{
        reg = (registros*)realloc(reg,(i+1)*sizeof(registros));
        fread(&reg[i],sizeof(registros),1,arq);
        i++;
      }while(!feof(arq));

      tam = i-1;
      i-=2;

     do{
          soma = soma + reg[i].salario;

        if(reg[i].sexo=='m')
        {
            m++;
            somasm = somasm + reg[i].salario;
        }
        else
        {
            h++;
            somash = somash + reg[i].salario;
        }
        i--;
       }while(i>=0);

      med =  soma/tam;
      medh =  somash/h;
      medm =  somasm/m;


    printf("%d %d %d %.2f %.2f %.2f",tam,m,h,med,medm,medh);
    free(reg);
    fclose(arq);
    return 0;
}
