#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, min, max, num, i, soma=0, media;



    scanf("%f", &n);


    scanf("%f",&num);
     max = num;
     min = num;

     soma = soma + num;

    for(i=0;i<n-1;i++)
    {

        scanf("%f",&num);


        soma = soma + num;

        if(num>=max)
         max = num;

        if(num<=min)
         min = num;
    }

     media = soma/n;

     printf("minimo: %.f \n", min);
     printf("maximo: %.f \n", max);
     printf("media: %.2f \n", media);

    return 0;
}
