#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, soma = 0;
    int n, i, j, fat = 1;

    scanf("%f %d", &x, &n);


    for(i=1;i<=n-2;i++)
    {


            for(j=1;j<=n-2;j++)
            {
                if(i==1)
                {
                    fat = 1;
                }
                else
                {
                    fat = fat*(j+1);
                }

                soma = soma + ((pow(x,i))/fat) - ((pow(x,i+2))/(fat*(j+1)));




            }


        }

    printf("%f", soma);

    return 0;
}
