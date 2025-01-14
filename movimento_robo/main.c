#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 200

int main()
{
    char mov[MAX];
    int i=0, quant, direcao=0,contD=0,contE=0,mod1,mod2,mod3,mod4;

    fgets(mov,MAX,stdin);

    quant = (int)strlen(mov);

    for(i=0;i<quant;i++)
    {
        if(mov[i]=='D')
        {
            direcao++;
            contD++;
        }

        if(mov[i]=='E')
        {
            direcao--;
            contE++;
        }
    }

    if(direcao==0)
        printf("Norte\n");

    if(direcao<0)
    {

        for(i=1;i<contE-contD;i++)
        {
            mod1 = ((contE-contD)%(1+(4*i)));
            mod2 = ((contE-contD)%(3+(4*i)));
            mod3 = ((contE-contD)%(4*i));
            mod4 = ((contE-contD)%(2+(4*i)));

            if((contE-contD==3) || (mod2==0))
            {
                printf("Leste\n");
                break;
            }

            if((contE-contD==1) || (mod1==0))
            {
                printf("Oeste\n");
                break;
            }

            if((contE-contD==0) || (mod3==0))
            {
                printf("Norte\n");
                break;
            }

            if((contE-contD==2) || (mod4==0))
            {
                printf("Sul\n");
                break;
            }
        }
    }

    if(direcao>0)
    {

        for(i=1;i<contD;i++)
        {
            mod1 = ((contD-contE)%(1+(4*i)));
            mod2 = ((contD-contE)%(3+(4*i)));
            mod3 = ((contD-contE)%(4*i));
            mod4 = ((contD-contE)%(2+(4*i)));

            if((contD-contE==3) || (mod2==0))
            {
                printf("Oeste\n");
                break;
            }

            if((contD-contE==1) || (mod1==0))
            {
                printf("Leste\n");
                break;
            }

            if((contD-contE==0) || (mod3==0))
            {
                printf("Norte\n");
                break;
            }

            if((contD-contE==2) || (mod4==0))
            {
                printf("Sul\n");
                break;
            }
        }
    }

    return 0;
}
