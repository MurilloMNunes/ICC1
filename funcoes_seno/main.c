#include <stdio.h>
#include <stdlib.h>

double sen(double,int);
double fat(int);
double pot(double,int);

int main()
{
    int quant;
    double x;

    scanf("%lf %d",&x,&quant);

    printf("%.6lf",sen(x,quant));

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

double sen(double x,int quant)
{
    int i;
    double res=0;

    for(i=0;i<quant;i++)
    {
        res = res + (pot(-1,i)*pot(x,2*i + 1))/fat(2*i + 1);
    }

    return res;
}
