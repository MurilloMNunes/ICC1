#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

int main()
{
    FILE *arq;
    char p1[MAX], p2[MAX], aux[MAX];
    int contp1=0, contp2=0;

    scanf("%s %s",p1,p2);

    arq = fopen("QuePaiseEste.txt","r");

    do{
        fscanf(arq,"%s",aux);

        if(strcmp(aux,p1)==0)
        {
            contp1++;
        }

        if(strcmp(aux,p2)==0)
        {
            contp2++;
        }

      }while(!feof(arq));

    printf("%s %d %s %d\n",p1,contp1,p2,contp2);
    return 0;
}
