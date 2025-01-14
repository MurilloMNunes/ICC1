#include <stdio.h>
#include <stdlib.h>

int main()
{
    char classe;

    scanf("%c", &classe);

    if(classe == 'b')
        printf("executiva");

    if(classe == 'e')
        printf("economica");

    if(classe == 'p')
        printf("primeira classe");

    if(classe != 'b' && classe != 'e' && classe != 'p')
        printf("classe desconhecida");

    return 0;
}
