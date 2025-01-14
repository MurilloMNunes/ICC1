#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, a2, a3, maior, soma;

    scanf("%d %d %d", &a1, &a2, &a3);

    soma = a1 + a2 + a3;

    if((a1<=0) || (a2<=0) || (a3<=0) || (a1>=180) || (a2>=180) || (a3>=180) )
        printf("Valores nao formam um triangulo");

    else
    {
        if(soma == 180)
    {
        if((a1<a3)&&(a2<a3))
    {
         maior = a3;
    }

    if((a1>a2)&&(a1>a3))
    {
         maior = a1;
    }

    if((a2<a3) && (a1<a3))
    {
         maior = a3;
    }

    if((a1<a2)&&(a2>a3))
    {
         maior = a2;
    }

    if((a1==a2) && (a1==a3))
        printf("Triangulo agudo");

     else
     {
        if((maior>0) && (maior<90))
        printf("Triangulo agudo");

        if(maior==90)
        printf("Triangulo retangulo");

        if((maior>90) && (maior<180))
        printf("Triangulo obtuso");
     }

    }
    else
    {
        printf("Valores nao formam um triangulo");
    }

    }










    return 0;
}
