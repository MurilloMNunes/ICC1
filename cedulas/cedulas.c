#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, r100, r50, r10, r5, n100, n50, n10, n5, n1;

    scanf("%d", &valor);

     n100 = valor/100;
     r100 = valor%100;
     n50 = r100/50;
     r50 = r100%50;
     n10 = r50/10;
     r10 = r50%10;
     n5 = r10/5;
     r5 = r10%5;
     n1 = r5/1;

    printf("%.3d notas de 100.00\n%.3d notas de 50.00\n%.3d notas de 10.00\n%.3d notas de 5.00\n%.3d notas de 1.00", n100, n50, n10, n5, n1);


    return 0;
}
