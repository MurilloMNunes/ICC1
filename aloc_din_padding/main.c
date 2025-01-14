#include <stdio.h>
#include <stdlib.h>

void adic_bordas(int *vet, int bordas, int alt, int larg);

int main()
{
    int i, j, larg, alt, *img, nbordas;

    scanf("%d%d",&larg,&alt);

    img = (int *)malloc((alt)*(larg)*sizeof(int));

    for(i=0;i<alt;i++)
    {
        for(j=0;j<larg;j++){
        img[(i*larg)+j] = 0;}
    }

    for(i=0;i<alt;i++)
    {
        for(j=0;j<larg;j++){
        scanf("%d",&img[(i*larg)+j]);
        }
    }

    scanf("%d",&nbordas);

    adic_bordas(img,nbordas,alt,larg);

    //free(img);

    return 0;
}

void adic_bordas(int *vet, int bordas, int alt, int larg)
{
    int i, j, *aux, nlarg, nalt, l=0, c=0, count=0;

    nlarg = larg + 2*(bordas);
    nalt = alt + 2*(bordas);

    aux = (int *)malloc(((nalt)*(nlarg))*sizeof(int));

    for(i=0;i<nalt;i++)
    {
        for(j=0;j<nlarg;j++)
        {
            aux[(i*nlarg)+j] = 0;
        }
    }

    for(i=bordas;i<nalt-bordas;i++)
    {
        for(j=bordas;j<nlarg-bordas;j++)
        {
            aux[(i*nlarg)+j] = vet[(l*larg)+c];
            c++;
        }
        l++;
        c=0;
    }

    for(i=0;i<(nalt*nlarg);i++)
    {
       printf("%d ",*aux++);
       count++;

       if(count==(nlarg))
       {
           putchar('\n');
           count=0;
       }
    }

    putchar('\n');

    for(i=0;i<alt;i++)
    {
        for(j=0;j<larg;j++)
        {
            printf("%d ",vet[(i*larg)+j]);
        }
        putchar('\n');
    }

    //free(aux);
   // free(vet);
}
