#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;

    scanf("%d", &t);

    if(t<0)
    printf("Tempo congelante.");

    if((t>=0) & (t<=10))
    printf("Tempo muito frio.");

    if((t>=11) & (t<=23))
    printf("Tempo frio.");

    if((t>=24) & (t<=30))
    printf("Tempo normal.");

    if((t>=31) & (t<=40))
    printf("Tempo quente.");

    if(t>=41)
    printf("Tempo muito quente.");


    return 0;
}
