#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float div;

    scanf("%d %d", &n1, &n2);

    div = (float) n1/ (float) n2;

    printf("A soma dos n%cmeros dados \x82 : %d \nA subtração dos números dados \x82: %d \nA multiplicação dos números dados \x82 : %d \nA divisão dos números dados \x82 : %f \nO módulo \x82 = %d",163, n1+n2, n1-n2,n1*n2,div,n1%n2);


    return 0;
}
