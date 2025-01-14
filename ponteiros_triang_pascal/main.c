#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void tr_pasc();

int main()
{
    int n, i, vet[MAX], soma;
    double prod;

    scanf("%d",&n);

    tr_pasc(vet,n,&soma,&prod);

    for(i=0;i<n;i++){
    printf("%d ", vet[i]);}

    printf("\n%d %.0f",soma,prod);

    return 0;
}

void tr_pasc(int vet[MAX], int n, int *som, double *prod)
{
    int i;

    vet[0] = 1;
    vet[n-1] = 1;
    *som = 1;

    for(i=1;i<n;i++)
    {
        vet[i] = vet[0] + (i-1);
        *som = *som + vet[i];
    }

    *prod = 1;
    for(i=0;i<n;i++)
    {
        *prod = (*prod)*vet[i];
    }
}
