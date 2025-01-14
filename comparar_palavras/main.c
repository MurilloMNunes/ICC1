#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 20

int tam();
int alfab();
int soma_val();
int repet();
int primeiro();

int main()
{
    char p1[MAX], p2[MAX];
    int n;

    scanf("%d %s %s",&n,p1,p2);

    if(n==1)
    printf("%d",tam(p1,p2));

    if(n==2)
    printf("%d",alfab(p1,p2));

    if(n==3)
    printf("%d",soma_val(p1,p2));

    if(n==4)
    //scanf("%c",&letra);
    //printf("%c\n",letra);
    printf("%d",repet(p1,p2));

    if(n==5)
    //scanf("%c",&letra);
    //printf("%c\n",letra);
    printf("%d",primeiro(p1,p2));

    return 0;
}

int tam(char p1[MAX], char p2[MAX])
{
    if(strlen(p1)>strlen(p2))
        return 1;

    if(strlen(p1)<strlen(p2))
        return 2;

    if(strlen(p1)==strlen(p2))
        return 0;

    return 0;
}

int alfab(char p1[MAX], char p2[MAX])
{
    int i=0;

    while((p1[i]!='\0') || (p2[i]!='\0'))
    {
        p1[i] = toupper(p1[i]);
        p2[i] = toupper(p2[i]);

        if(p1[i]<p2[i])
        return 1;

        if(p1[i]>p2[i])
        return 2;

        if(p1[i]==p2[i])
        i++;
    }
    return 0;
}

int soma_val(char p1[MAX], char p2[MAX])
{
    int i=0, soma1=0, soma2=0;

    while(p1[i]!='\0')
    {
        p1[i] = toupper(p1[i]);
        soma1 = soma1 + (p1[i]-65);
        i++;
    }

    i=0;
    while(p2[i]!='\0')
    {
        p2[i] = toupper(p2[i]);
        soma2 = soma2 + (p2[i]-65);
        i++;
    }

    if(soma1>soma2)
        return 1;

    if(soma1<soma2)
        return 2;

    return 0;

}

int repet(char p1[MAX], char p2[MAX])
{
    int i=0, cont1=0, cont2=0;
    char letra;

    scanf("%c",&letra);

    while((p1[i]!='\0') || (p2[i]!='\0'))
    {
        if(p1[i]==letra){
        cont1++;}

        if(p2[i]==letra){
        cont2++;}

        printf("%d %d\n",p1[i],cont2);

        i++;
    }

    if(cont1>cont2)
    return 1;

    if(cont1<cont2)
    return 2;

    if(cont1==cont2)
    return 0;

    return 0;
}

int primeiro(char p1[MAX], char p2[MAX])
{
    int i=0;
    char letra;

    scanf("%c",&letra);

    while((p1[i]!='\0') || (p2[i]!='\0'))
    {
        if(p1[i]==letra){
        return 1;;}

        if(p2[i]==letra){
        return 2;}

        //printf("%d %d\n",p1[i],cont2);

        i++;
    }

    return 0;
}
