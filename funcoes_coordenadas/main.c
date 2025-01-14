#include <stdio.h>
#include <stdlib.h>

double sen();
double fat();
double pot();
float coord(float,float);

int main()
{
    float magnitude, angulo;

    scanf("%f\n%f",&magnitude,&angulo);

    coord(magnitude,angulo);

    return 0;
}

double fat(int quant)
{
    int i;
    double res;

    res = quant;

    for(i=quant-1;i>1;i--)
    {
        res = res*i;
    }

    return res;

}

double pot(double base, int exp)
{
    int i;
    double res=1;

    for(i=0;i<exp;i++)
    {
        res = res*base;
    }

    return res;
}

double sen(double x)
{
    int i;
    double res=0;

    for(i=0;i<10;i++)
    {
        res = res + (pot(-1,i)*pot(x,2*i + 1))/fat(2*i + 1);
    }

    return res;
}

float coord(float mag, float ang)
{
    float x, y, angaux;

    angaux = (3.141593/2) - ang;

    x = mag*(float)sen(angaux);
    y = mag*(float)sen(ang);

    return printf("%.2lf 0.00\n0.00 %.2lf",x,y);
}
