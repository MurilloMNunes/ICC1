#include <stdio.h>
#include <stdlib.h>

typedef struct{
int id, idade;
char nomes, cur;
} registro;

int main()
{
    //registro alunos;
    int i, j=0, m=0, n;
    int *ident, *idade;
    char *nome, *curso;

    ident = (int*)malloc(sizeof(int));
    idade = (int*)malloc(sizeof(int));
    nome = (char*)malloc(sizeof(char));
    curso = (char*)malloc(sizeof(char));


    for(i=0;i<i+2;i++)
    {

        scanf("%c",&nome[i]);

        if(nome[i]=='\n')
            j++;

        printf("%d",i);
       // printf("\n%d\n",*ident);
        nome = (char*)realloc(nome,(i+1)*sizeof(char));
        /*scanf("%d",&ident[i]);



        if(ident[i]==-1)
            continue;

        printf("\n\n%d\n\n",ident[i]);

        while(nome[j]!='\n')
        {
            nome = (char*)realloc(nome,(j+1)*sizeof(char));
            scanf("%c",&nome[j]);
            printf("%c",nome[j]);
            if(nome[j]=='\n')
                continue;

            j++;
        }
        printf("\n\n%s\n\n",nome);
        j++;

        for(m=m;curso[m]!='\0';j++)
        {
            curso = (char*)realloc(curso,(m+1)*sizeof(char));
            scanf("%c",&curso[j]);
        }
        m++;

        idade = (int*)realloc(idade,(i+1)*sizeof(int));
        scanf("%d",&idade[i]);*/
    }

    printf("alou");

    printf("%d\n%s\n%s\n%d\n",*ident,nome,curso,*idade);

    free(ident);
    free(nome);
    free(curso);
    free(idade);

    return 0;
}
