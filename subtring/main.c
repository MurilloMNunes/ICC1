#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX1 50
#define MAX2 30

int main()
{
    char frase[MAX1], subfrase[MAX2];
    int i, j=0, cont;

    fgets(frase,MAX1,stdin);
    fgets(subfrase,MAX2,stdin);

    for(i=0;i<(int)strlen(frase);i++)
    {
        if(frase[i]==subfrase[j])
        {
            cont++;
            j++;

            if(cont==(int)strlen(subfrase))
                continue;
        }
        else
        cont = 0;
    }

    if(cont>0)
    {
        printf("A frase contem a substring %s",subfrase);
    }

    if(cont==0)
    {
        printf("A frase nao contem a substring %s",subfrase);
    }

    return 0;
}
