#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void soma(int,float,float);
void prod_vet(int,float,float);
void prod_esc(int,float,float,float);

int main()
{
    int num, op, s, i;
    float lim1, lim2, esc;

    scanf("%d\n%d\n%f %f",&num,&s,&lim1,&lim2);

    for(i=0;i<num;i++)
    {
        scanf("%d",&op);

        if(op==1)
        {
            soma(s,lim1,lim2);
            //printf("%f %f %f",*u,*v,*w);
        }

        if(op==2)
        {
            prod_vet(s,lim1,lim2);
        }

        if(op==3)
        {
            scanf("%f",&esc);
            prod_esc(s,esc,lim1,lim2);
            //printf("%f %f",*u,*v);
        }
    }

    return 0;
}

void soma(int s, float lim1, float lim2)
{
    float w, u, v;

    srand(s);

    u = (lim1-1) + ((float)rand()/(float)(RAND_MAX))*lim2;
    v = (lim1-1) + ((float)rand()/(float)(RAND_MAX))*lim2;

    w = u + v;
    printf("%f %f %f\n",u,v,w);
}

void prod_vet(int s, float lim1, float lim2)
{
    float u, v, w;

    srand(s);

    u = (lim1-1) + ((float)rand()/(float)(RAND_MAX))*lim2;
    v = (lim1-1) + ((float)rand()/(float)(RAND_MAX))*lim2;

    w = u*v;

    printf("%f %f %f\n",u,v,w);
}

void prod_esc(int s, float esc, float lim1, float lim2)
{
    float u, v;

    srand(s);

    v = (lim1-1) + ((float)rand()/(float)(RAND_MAX))*lim2;

    u = esc*v;

    printf("%f %f\n",u,v);
}
