#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct{
char nome[40];
int idade;
char sexo;
int matricula;
}reg;

int main()
{
    FILE *arq;
    int num, tam, i=0;
    reg *aluno;

    arq = fopen("dados-alunos.bin","rb");
    assert(arq);
    fread(&tam,sizeof(int),1,arq);

    aluno = (reg*)malloc(tam*sizeof(reg));

    fread(aluno,sizeof(reg),tam,arq);

    scanf("%d",&num);

    for(i=0;i<tam;i++)
    {
        if(aluno[i].matricula==num)
        {
            printf("Nome: %s\nIdade: %d\nSexo: %c\nMatricula: %d",aluno[i].nome,aluno[i].idade,aluno[i].sexo,aluno[i].matricula);
        }
    }

    free(aluno);
    fclose(arq);
    return 0;
}
