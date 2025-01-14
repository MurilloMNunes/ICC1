#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float n, media, num, soma=0;

    scanf("%f", &n);

    for(i=0;i<n;i++)
    {
        scanf("%f",&num);
        soma = soma + num;
    }

     media = soma/n;

     if(media>=90 && media<=100)
     printf("media: %.2f (Excelente)", media);
     if(media>=80 && media<=89)
     printf("media: %.2f (Muito Bom)", media);
     if(media>=70 && media<=79)
     printf("media: %.2f (Bom)", media);
     if(media>=50 && media<=69)
     printf("media: %.2f (Regular)", media);
     if(media>=0 && media<=49)
     printf("media: %.2f (Reprobado)", media);

    return 0;
}
