#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior();
void imprime();

int main()
{
    int i, n, *num, f[9], *aux, p;

    scanf("%d",&n);
    printf("%d\n",n);

    num = (int*)malloc(n*sizeof(int));
    aux = (int*)malloc(n*sizeof(int));

    scanf("%d",&(*num));
    printf("%d\n",*num);

    for(i=n;i>=0;i--)
    {
        for(j=n;j>=0;j--)
        {
            aux[i] = num
        }
    }
    printf("%d\n",aux[1]);

    for(i=0;i<9;i++)
    {
        scanf("%d",&f[i]);
    }

    maior(num,f,n);
   // imprime(num,n);

    free(num);

    return 0;
}

int maior(int *numero, int *fs, int n)
{
    if(n==0)
        numero[0] = fs[0];
        return *numero;

    numero[n] = fs[n];

    return maior(numero,fs,n-1);
}

void imprime(int *numero, int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d",numero[i]);
    }
}
