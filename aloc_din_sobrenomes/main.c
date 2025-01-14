#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void adic_sobrnm(char*,int);

int main()
{
    char *nomes;
    int i=0, tam=0;

    nomes = (char*)malloc(sizeof(char));

    do
    {
        nomes = (char*)realloc(nomes,(i+1)*sizeof(char));
        scanf("%c",&nomes[i]);

        tam++;
    }while(nomes[i++]!=36);

    for(i=0;i<=tam;i++)
    {
        if(nomes[i]==36)
            nomes[i] = '\0';
    }

    //printf("%s",nomes);

    adic_sobrnm(nomes, tam);

    free(nomes);

    return 0;
}

void adic_sobrnm(char *nom, int tam)
{
    char *aux1, *aux2, *mat;
    int i, j=0, k=1, n=0, m=0, l=1, p=tam, r, contesp=0, contesp2=0, t=1;

    aux1 = (char*)malloc(tam*sizeof(char));
    aux2 = NULL;

    strcpy(aux1,nom);

    for(i=0;i<tam;i++)
    {
        if(nom[i]=='\n')
            l++;
    }

    mat = (char*)malloc(tam*sizeof(char));

    strcpy(mat,nom);

    for(i=0;i<l;i++)
    {
        //strtok(aux1,"\n");
       // printf("\n%s\n",aux1);
        if(i%2==0){
        do
        {
            r = isspace(aux1[j]);
            if(r!=0)
            {
                contesp++;
            }
            j++;
        }while(aux1[j]!='\n');
        j = 0;

        do
        {
            r = isspace(aux1[j]);
            if(r!=0)
            {
                contesp2++;
            }
            j++;
        }while(contesp2!=contesp);

        do{
                aux2 = (char *)realloc(aux2,k*sizeof(char));
                aux2[0] = ' ';
                aux2[k] = aux1[j];
                //printf("\n%d %d\n",k,j);
               // aux2[k+1] = '\0';
                k++;
            //j++;
        }while(aux1[j++]!='\n');

        //strcpy(aux1,strtok(NULL,""));
        printf("\n%s\n",aux2);
        j = 0;

        do
        {
            m++;
            //printf("\n%d\n",m);
            j++;
        }while(aux1[j+1]!='\n');
        //printf("\n%d\n",m);

        j+=2;
        m+=2;
        do
        {
            m++;
            j++;
        }while(aux1[j+1]!='\n');
        //printf("\n%d\n",m);
        //strtok(aux1,"\n");
        //printf("\n%s  %d\n",aux1,i);

        n = (int)strlen(aux2);
        p = p + n;
        mat = (char *)realloc(mat,p*sizeof(char));
        for(j=0;j<n;j++)
        {
            mat[((i+1)*m)+j+1] = mat[((i+1)*m)+j];
            mat[((i+1)*m)+j] = aux2[j];
        }

        }
        //printf("\n%s\n",mat);

        /*for(t=0;aux1[t]!='\n';t++)
        {
            aux1++;
        }
        aux1++;*/
        if(i<l-1){
       strtok(aux1,"\n");
       strcpy(aux1,strtok(NULL,""));}
        //printf("\n%s  %d\n",aux1,p);

            contesp = 0;
            contesp2 = 0;
            j = 0;
            k = 1;
            aux2[0] = '\0';
            //m = 0;
            printf("\n%s\n",aux2);

       }

       // printf("\n\n%s\n",mat);

 // printf("%s\n",aux1);

    /*free(aux1);
    free(aux2);
    free(nom);
    free(mat);*/

}
