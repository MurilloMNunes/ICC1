#include <stdio.h>
#include <stdlib.h>

double sen();
double fat();
double pot();
float coord(float*,float*);

int main()
{
    float *a, *b, mag, ang;

    scanf("%f\n%f",&mag,&ang);

    a = &mag;
    b = &ang;

    coord(a,b);

     printf("%.2f 0.00\n0.00 %.2f",*a,*b);

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

float coord(float *p, float *q)
{
    float x, y, angaux;

    angaux = (3.141593/2) - *q;

    x = (*p)*(float)sen(angaux);
    y = (*p)*(float)sen(*q);

    *p = x;
    *q = y;

    return 0;
}
