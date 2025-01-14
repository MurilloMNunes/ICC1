#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main()
{
    char frase[MAX], maior[MAX], menor[MAX], aux[MAX];
    int i=0, n, cont=0;

    fgets(frase,MAX,stdin);
    strcpy(aux,frase);

    strtok(frase," ");
    strcpy(maior,frase);
    strcpy(menor,frase);
    strcpy(frase,strtok(NULL,""));
    n = (int)strlen(frase);   //Eu adoro ICC1 por isso programo muito para treinar
    //printf("%d",n);


while(i<=n-1)
    {
        if(cont==1)
        {
            i = i + n - (int)strlen(frase);
        }
        //printf("%d ",i);
        strtok(frase," ");
        //printf("%s",frase);

        if((int)strlen(frase)>=(int)strlen(maior)){
            strcpy(maior,frase);
            }
        //printf("%s",maior);

        if((int)strlen(frase)<=(int)strlen(menor)){
            strcpy(menor,frase);
            }

        i = i + (int)strlen(frase);
        if(i==n-1)
        {
            break;
        }

        strcpy(frase,strtok(NULL,""));

        cont++;
    }

    printf("%s\n%s",menor,maior);


    /*while(i<=n)
    {
        if(cont==1)
        {
            i = i + n - (int)strlen(frase);
        }

        strtok(aux," ");


        if((int)strlen(aux)==(int)strlen(maior)){
            printf("%s",aux);
            }


        if((int)strlen(aux)==(int)strlen(menor)){
            printf("%s",aux);
            }

        i = i + (int)strlen(aux);
        if(i==n-1)
        {
            break;
        }

        strcpy(aux,strtok(NULL,""));

        cont++;
    }*/


    return 0;
}
