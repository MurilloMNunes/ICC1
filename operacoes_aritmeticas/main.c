#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float div;

    scanf("%d %d", &n1, &n2);

    div = (float) n1/ (float) n2;

    printf("A soma dos n%cmeros dados \x82 : %d \nA subtra��o dos n�meros dados \x82: %d \nA multiplica��o dos n�meros dados \x82 : %d \nA divis�o dos n�meros dados \x82 : %f \nO m�dulo \x82 = %d",163, n1+n2, n1-n2,n1*n2,div,n1%n2);


    return 0;
}
