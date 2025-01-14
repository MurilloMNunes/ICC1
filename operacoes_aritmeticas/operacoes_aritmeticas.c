#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float div;

    scanf("%d %d", &n1, &n2);

    div = (float) n1/ (float) n2;

    printf("A soma dos números dados é : %d \nA subtração dos números dados é: %d \nA multiplicação dos números dados é : %d \nA divisão dos números dados é : %f \nO módulo é = %d", n1+n2, n1-n2,n1*n2,div,n1%n2);


    return 0;
}
