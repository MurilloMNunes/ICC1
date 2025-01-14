#include <stdio.h>
#include <stdlib.h>

int* getConjuntoFatorial(int,int);

int main()
{
    int n0, size, i, *n;

    scanf("%d %d",&n0,&size);

    n = (int *)calloc(size, sizeof(int));

    n = getConjuntoFatorial(n0,size);

    for(i=0;i<size;i++)
    {
        printf("%d ",*n++);
    }

    return 0;
}

 int* getConjuntoFatorial(int n0, int size)
{
    int *n, n1=n0, aux, i, j=0;

    n = (int *)calloc(size, sizeof(int));

    aux = n0 - 1;

    if(n0==0)
        n1 = 1;

    while(aux>1)
    {
        n1 = n1*aux;
        aux--;
    }

    n[0] = n1;
    i = 1;
    n1 = n0 + 1;
    while(j<size)
    {
        n[i] = (n[i-1])*(n1);
        i++;
        j++;
        n1++;
    }

    return n;
}
