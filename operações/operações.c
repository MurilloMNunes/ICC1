#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, n;

    scanf("%d %d %d", &a, &b, &n);

    if(n==1)
        printf("%d", a+b);

    if(n==2)
        printf("%d", a-b);

    if(n==3)
        printf("%d", a*b);

    if(n!=1 && n!=2 && n!=3)
        printf("opcao invalida");

    return 0;
}
