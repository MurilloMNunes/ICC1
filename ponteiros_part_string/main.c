#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void particionar(char *str,char mat[][MAX]);
void imprimir(char *str, char mat[][MAX]);
void ordenar(char *str, char mat[][MAX]);

int main()
{
    char str[MAX], res[MAX][MAX];
    int opcao;

    fgets(str,MAX,stdin);
    scanf("%d",&opcao);

    if(opcao==1)
    {
        particionar(str,res);
        imprimir(str,res);
    }

    if(opcao==2)
    {
        particionar(str,res);
        ordenar(str,res);
        imprimir(str,res);
    }

    return 0;
}

void particionar(char *str, char mat[][MAX])
{
    int i=0, j=0, k, r, n;

    n = (int)strlen(str);

    for(k=0;k<n;k++)
    {
        r = isspace(*str);
        if(r!=0)
        {
            i++;
            j=0;
            str++;
        }
        mat[i][j] = *str;
        str++;
        j++;
    }
}

void imprimir(char *str, char mat[][MAX])
{
    int i, j, cont=0, r, n;

    n = (int)strlen(str);

    for(i=0;i<n;i++)
    {
        r = isspace(*str);
        if(r!=0)
            cont++;

        str++;
    }

    for(i=0;i<cont;i++)
    {
        n = (int)strlen(mat[i]);
        for(j=0;j<n;j++){
        printf("%c",mat[i][j]);}
        printf("\n");
    }
}

void ordenar(char *str, char mat[][MAX])
{
    int i, j, n, r, cont=0;
    char aux[MAX];

    n = (int)strlen(str);

    for(i=0;i<n;i++)
    {
        r = isspace(*str);
        if(r!=0)
            cont++;

        str++;
    }

    for(i=0;i<cont;i++)
    {
        n = (int)strlen(mat[i]);
        for(j=0;j<n;j++)
        {
            mat[i][j] = tolower(mat[i][j]);
        }
    }

    for(i=0;i<cont;i++)
    {
        for(j=0;j<cont;j++)
        {
            if(strcmp(mat[j],mat[i])==0)
                continue;

            if(strcmp(mat[j],mat[i])>0)
            {
                strcpy(aux,mat[i]);
                strcpy(mat[i],mat[j]);
                strcpy(mat[j],aux);
            }

        }
    }
}
