#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int main()
{
    char frase[MAX];
    int i, j, n, cont=0;

    fgets(frase,MAX,stdin);
    n = (int)strlen(frase);
    for(i=0;i<=n;i++){
    frase[i] = toupper(frase[i]);}
    j=(n-2);

    for(i=0;i<n;i++)
    {
        if(frase[i]==frase[j])
        {
            cont++;
        }
        j--;
    }

    if(cont==(n-1))
    {
        printf("SIM");
    }
    else
    {
        printf("NAO");
    }


    return 0;
}
