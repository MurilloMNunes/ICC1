#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define max 100

int main()
{
    char p[max], a[max], aux[max], c;
    int i, j=0;

    scanf("%s %c",p,&c);

    for(i=0;p[i]!='\0';i++){
    aux[i] = p[i];
    p[i] = tolower(p[i]);}
    c = tolower(c);

    for(i=0;p[i]!='\0';i++)
    {
        if(p[i]!=c)
        {
            a[j] = aux[i];
            printf("%c",a[j]);
            j++;
        }
    }

    printf(" ");

    return 0;

}
