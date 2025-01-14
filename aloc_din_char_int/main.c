#include <stdio.h>
#include <stdlib.h>

void ordenar_vet(char*,int);

int main()
{
    char *caract;
    int i=0, tam=0;

    caract = (char*)malloc(sizeof(char));

    while(caract[i]!=120)
    {
        caract = (char*)realloc(caract,(i+2)*sizeof(char));
        scanf("%c",&caract[i]);

        if(caract[i]==120)
        {
       // caract[i] = 65;
        continue;
        }

        i++;
        tam++;
    }

    for(i=0;i<=tam;i++)
    {
        if(caract[i]==120)
        {
            caract[i] = 0;
        }
    }

    //printf("%s\n",caract);

    ordenar_vet(caract,tam);

    //caract = (int*)realloc(caract,4*tam*sizeof(char));

     for(i=0;i<tam;i++)
    {
        printf("%d\n",caract[i]);
    }

    return 0;
}

void ordenar_vet(char *vet, int tam)
{
    int i, j, aux=0;

    //printf("%s",vet);

    for(i=0;i<tam-1;i++)
    {
        for(j=tam-1;j>i;--j)
        {
            if(vet[j-1]>vet[j])
            {
                aux = vet[j-1];
                vet[j-1] = vet[j];
                vet[j] = aux;
            }
        }
    }

    printf("%s",vet);

    vet = (char*)realloc(vet,4*sizeof(char));

    for(i=0;i<tam;i++)
    {
         vet[i] = vet[i] - '0';
    }

   // printf("%d",vet);
}
