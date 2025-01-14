#include <stdio.h>
#include <stdlib.h>

int a, b, c;

char angulotriangulo(int a1, int a2, int a3)
{
    if((a1>90) || (a2>90) || (a3>90))
    {
        return printf("Triangulo obtuso");
    }

    if((a1==90) || (a2==90) || (a3==90))
    {
        return printf("Triangulo retangulo");
    }

    if((a1<90) && (a2<90) && (a3<90))
    {
        return printf("Triangulo agudo");
    }

    return 0;
}

int ehtriangulo(int a1, int a2, int a3)
{
    if((a1+a2+a3)==180)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    scanf("%d\n%d\n%d",&a,&b,&c);

    if(ehtriangulo(a,b,c)==1)
    {
        angulotriangulo(a,b,c);
    }
    else
    {
        printf("Valores nao formam um triangulo");
    }

    return 0;
}
