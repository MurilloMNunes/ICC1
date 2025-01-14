#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    scanf("%d", &i);

    if(i>=5 && i<=7)
        printf("Infantil A");

    if(i>=8 && i<=10)
        printf("Infantil B");

    if(i>=11 && i<=13)
        printf("Juvenil A");

    if(i>=14 && i<=17)
        printf("Juvenil B");

     if(i>=18)
        printf("Adulto");

    return 0;
}
