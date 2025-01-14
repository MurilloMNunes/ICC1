#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 30

int main()
{
    char nome[MAX];
    int i, n, min=0, mai=0, num=0, esp=0;

    fgets(nome,MAX,stdin);
    n = (int)strlen(nome);

    for(i=0;i<n-1;i++)
    {
        if((nome[i]>=48) && (nome[i]<=57))
        {
            num++;
        }

        if((nome[i]>=65) && (nome[i]<=90))
        {
            mai++;
        }

        if((nome[i]>=97) && (nome[i]<=122))
        {
            min++;
        }

        if((nome[i]<48) || (nome[i]>57 && nome[i]<65) || (nome[i]>90 && nome[i]<97) || (nome[i]>122))
        {
            esp++;
        }
    }

    if((num==0) || (mai==0) || (min==0) || (esp>0))
    {
        printf("Username invalido\n");
    }
    else
    {
        printf("Username OK");
    }

    if(esp>0)
    {
        printf("Possui caracter especial\n");
    }

    if((num==0) || (mai==0) || (min==0))
    {
        printf("Nao possui os tres tipos de caracteres\n");
    }


    return 0;
}
