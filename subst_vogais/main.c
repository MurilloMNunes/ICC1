#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int main()
{
    char frase[MAX], a[MAX];
    int i;

    fgets(frase,MAX,stdin);

    for(i=0;i<(int)strlen(frase);i++)
    {
        a[i] = frase[i];
        if((frase[i]=='A') || (frase[i]=='E') || (frase[i]=='I') || (frase[i]=='O') || (frase[i]=='U') || (frase[i]=='a') || (frase[i]=='e') || (frase[i]=='i') || (frase[i]=='o') || (frase[i]=='u'))
        {
            a[i] = '*';
        }
    }

    for(i=0;i<(int)strlen(frase);i++){
    printf("%c",a[i]);}

    return 0;

}
