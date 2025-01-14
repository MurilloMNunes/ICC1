#include <stdio.h>
#include <stdlib.h>

int sist();
int resol();

int main()
{
    float vet[5], x, y, a, b, c;
    int i;

    for(i=0;i<6;i++){
    scanf("%f",&vet[i]);}

    if(sist(vet)==0)
    {
        resol(vet,&x,&y);
        printf("SPD\n%.2f %.2f",x,y);
    }

    if(sist(vet)==1)
    {
        a = vet[0]/vet[3];
        b = vet[1]/vet[4];
        c = vet[2]/vet[5];
        if((a==b)&&(a==c)){
        printf("SPI");}

        else
        printf("SI\n");
    }

    return 0;
}

int sist(float val[5])
{
    float det;

    det = (val[0]*val[4]) - (val[1]*val[3]);

    if(det!=0)
        return 0;

    if(det==0)
        return 1;

    return 0;
}

int resol(float val[5], float *x, float *y)
{
    float det, dx, dy;

    det = (val[0]*val[4]) - (val[1]*val[3]);
    dx = (val[2]*val[4]) - (val[1]*val[5]);
    dy = (val[0]*val[5]) - (val[2]*val[3]);

    *x = dx/det;
    *y = dy/det;

    return 0;
}
