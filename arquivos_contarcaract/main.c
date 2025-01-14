#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct{
char letra;
int freq;
}freqLetra;

int main()
{
    FILE *arq;
    int i, j=97;
    char caract;
    freqLetra *frq;

    frq = (freqLetra*)malloc(26*sizeof(freqLetra));

    for(i=0;i<26;i++)
    {
        frq[i].letra = j;
        frq[i].freq = 0;
        j++;
    }

    arq = fopen("texto.txt","r");

    do{
        fscanf(arq,"%c",&caract);
        caract = tolower(caract);
        //printf("%c ",caract);
        for(i=0;i<26;i++)
        {
            if(caract==frq[i].letra)
                frq[i].freq++;
        }

      }while(!feof(arq));

    for(i=0;i<26;i++)
    {
        printf("%c = %d\n",frq[i].letra,frq[i].freq);
    }

    fclose(arq);
    free(frq);
    return 0;
}
