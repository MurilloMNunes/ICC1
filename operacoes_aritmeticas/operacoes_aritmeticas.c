#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float div;

    scanf("%d %d", &n1, &n2);

    div = (float) n1/ (float) n2;

    printf("A soma dos n�meros dados � : %d \nA subtra��o dos n�meros dados �: %d \nA multiplica��o dos n�meros dados � : %d \nA divis�o dos n�meros dados � : %f \nO m�dulo � = %d", n1+n2, n1-n2,n1*n2,div,n1%n2);


    return 0;
}
