#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct comentario
{
char D[14];
char T[100];
int E;
char S[9];
};


int main(void)
 {
   int i=0;
   int b, z;
   int a=0;
   int o;
   char D[3];
   char M[3];
   char A[5];
   char T[100];
   char S[9];
   char qualasenha[9];
   int encerramento;
   int revisao;
   char data3[14];


   printf("\n\nBem vindo ao diário. O que quer fazer primeiro??");

   while(a==0)
   {
     //introdução e menu de opções
     printf("\nResponda o número correspondente à opção desejada:");
     printf("\n\n1 - Inserir comentário\n2 - Listar comentários\n3 - Buscar comentário\n4 - Apagar comentário\n5 - Sair do diario\n\nOpção : ");
     scanf("%i", &o);


     switch (o)
     {
       //listar comentário
       case 1:

       i++;

       struct comentario c[101] ;

       //solicitando a data do comentario
       printf("\nQual a data do texto? (Somente em números)\n\n Dia: ");
       scanf(" %s",D);
       printf(" Mês: ");
       scanf(" %s", M);
       printf(" Ano: ");
       scanf(" %s", A);

       strcpy(c[i].D, D);
       strcat(c[i].D, "/");
       strcat(c[i].D, M);
       strcat(c[i].D, "/");
       strcat(c[i].D, A);

       printf("\n\nA data inserida é %s", c[i].D);

       setbuf(stdin, NULL);

       //solicitando texto

       printf("\n\nO máximo de caracteres no texto é 100 caracteres. O texto se encerra ao apertar enter. Digite o texto : \n\n");
       scanf("%[^\n]s",c[i].T);


       //solicitando segurança

       printf("\n\nO texto é secreto? Digite 1 (sim) ou 0 (não):\n");
       scanf("%i",&c[i].E);



       //inserindo senha caso seja secreto
        if( c[i].E == 1)
        {
         printf("Qual a senha? (Máximo de 8 caracteres)\n");
         scanf("%s", S);
         strcpy(c[i].S, S);
        }


       strcpy(c[i].T, T);


       printf("\nDeseja ver a apresentação do comentário?\nResponda com 1 (sim) ou 0 (não).\n");
       scanf("%i", &revisao);

      if(revisao == 1)
      {

        printf("\n\n---------------------------------");
        printf("\n\nComentário do dia %s :", c[i].D);
        printf("\n\nTexto:\n\n%s", c[i].T);
        printf("\n\nRevisao finalizada. ");
        printf("\n\n---------------------------------");

      }

       printf("\n\nComentário inserido com sucesso.");
       printf("\nO que quer fazer agora?\n\n");

       break;

       case 2:

       printf("Lista de todos os comentários:\n\n");
       printf("---------------------------------");
       for(b=1;b<=i;b++)
       {

         printf("\n\n%i° comentário, escrito em %s:" ,b,c[b].D);

           if(c[b].E == 1)
           {
           printf("\n\nEstado : SECRETO");
           printf("\n\n---------------------------------");
           }
           else
           {
           printf("\n\nEstado : ABERTO");
           printf("\n\nTexto:\n\n%s",c[b].T);
           printf("\n\n---------------------------------");
           }
         printf("\n\nLista encerrada. O que quer fazer agora?\n\n");
       }

       break;

       case 3:

       printf("\n\nInsira a data (Somente em números) do comentário que está procurando: \n\n");

       printf("Dia: ");
       scanf(" %s",D);
       printf("Mês: ");
       scanf(" %s", M);
       printf("Ano: ");
       scanf(" %s", A);

       strcpy(data3, D);
       strcat(data3, "/");
       strcat(data3, M);
       strcat(data3, "/");
       strcat(data3, A);

       printf("Procurando comentário da data %s",data3);


       for(z=1;z<=i;z++)
       {
         if(strcmp(data3,c[z].D)==0)
         {
           printf("\n\nTexto encontrado:");
           printf("\n\n---------------------------------");
           printf("\n\nComentário do dia %s :", c[z].D);
           printf("\n\nTexto:\n\n%s", c[z].T);
           printf("\n\n---------------------------------\n\n");
         }
         if(strcmp(data3,c[z].D)==0) break;
       }

       if(strcmp(data3,c[z].D)!=0)
       {
         printf("\n\nNÃO EXISTE");
       }

       printf("\n\nO que quer fazer agora?\n\n");

       break;

       case 4:


       break;

       case 5:

       //opção 5, "encerrar programa?"

       printf("\n\nTem certeza de que deseja encerrar? Responda com 1 (sim) ou 0 (não)): \n");
       scanf("%i", &encerramento);

       if(encerramento == 1)
       {
         a++;
       }
       else
       {
         printf("\n\nMuito bem.\n");
         printf("\nO que quer fazer agora?\n\n");
       }
        break;
     }
   }
   printf("\n\nDiário encerrado.");
  return 0;
}
