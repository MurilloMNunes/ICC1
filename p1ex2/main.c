#include <stdio.h>
#include <stdlib.h>
#define MAX 16

int main()
{
    int v[MAX], aux[MAX], i;

    for(i=0;i<MAX;i++)
    {
        scanf("%d", &v[i]);
        if(v[i]<0)
        {
            v[i] = 0;
        }
        aux[i] = v[i];
    }

    for(i=0;i<MAX;i++)
    {
        if(i<8)
        {
            v[i] = aux[i+8];
        }

        if(i>=8)
        {
            v[i] = aux[i-8];
        }
    }

    for(i=0;i<MAX;i++){
    printf("%d ",v[i]);}


    return 0;
}
