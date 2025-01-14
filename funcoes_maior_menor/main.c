#include <stdio.h>
#include <stdlib.h>
#define MAX 10

float maior(float val[MAX])
{
    float mai;
    int i;

    mai = val[0];

    for(i=1;i<MAX;i++)
    {
        if(val[i]>mai)
        {
            mai = val[i];
        }
    }
    return mai;
}

float menor(float val[MAX])
{
    float men;
    int i;

    men = val[0];

    for(i=1;i<MAX;i++)
    {
        if(val[i]<men)
        {
            men = val[i];
        }
    }
    return men;
}


int main()
{
    float v[MAX];
    int i;

    for(i=0;i<MAX;i++)
    {
        scanf("\n%f",&v[i]);
    }

    printf("%.2f\n%.2f",menor(v),maior(v));


    return 0;
}
