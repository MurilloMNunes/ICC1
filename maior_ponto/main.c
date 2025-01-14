#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
    int i;
    float media, maior=0, pontos[MAX], mx, my;

    for(i=0;i<MAX;i++)
    {
        scanf("%f",&pontos[i]);

        if((i%2)==1)
        {
            media = (pontos[i] + pontos[i-1])/2;
        }

        if(media>maior)
        {
            maior = media;
            my = pontos[i];
            mx = pontos[i-1];
        }
    }

    printf("%.2f %d %d",maior,(int)mx,(int)my);

    return 0;
}
