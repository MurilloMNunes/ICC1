#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

float calcMaior(int, float*, int, int*);

int main()
{
    FILE *arq;
    int i, n, posMaior;
    float *num;

    arq = fopen("dados.txt","r");

    fscanf(arq,"%d",&n);
    posMaior = n-1;

    num = (float*)malloc(n*sizeof(float));

    for(i=0;i<n;i++)
    {
        fscanf(arq,"%f ",&num[i]);
    }

    calcMaior(n-2,num,n-2,&posMaior);

    printf("Valor Maior: %.2f\nPos Maior: %d",num[posMaior],posMaior);
    fclose(arq);
    return 0;
}

float calcMaior(int N, float *vet, int posAtual, int *posMaior)
{
    if(N==0)
      return *posMaior;

    else
    {
        if(vet[N-1]>vet[*posMaior]){
            *posMaior = N-1;
            return calcMaior(N-1,vet,posAtual-1,posMaior);}

        else
        return calcMaior(N-1,vet,posAtual-1,posMaior);
    }
}
