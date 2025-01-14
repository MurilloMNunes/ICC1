#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peq, med, grande, num1, num2, num3;

    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    if(num1>num2 && num1>num3 && num2>num3)
    {
        grande = num1;
        med = num2;
        peq = num3;

        if((grande - med) == (med - peq))
        printf("resposta: 1");
        else
        printf("resposta: 0");
    }

    if(num1<num2 && num1<num3 && num2>num3)
    {
        grande = num2;
        med = num3;
        peq = num1;

        if((grande - med) == (med - peq))
        printf("resposta: 1");
        else
        printf("resposta: 0");
    }

    if(num1<num2 && num1>num3 && num2>num3)
    {
        grande = num2;
        med = num1;
        peq = num3;

        if((grande - med) == (med - peq))
        printf("resposta: 1");
        else
        printf("resposta: 0");
    }

    if(num1<num2 && num1<num3 && num2<num3)
    {
        grande = num3;
        med = num2;
        peq = num1;

        if((grande - med) == (med - peq))
        printf("resposta: 1");
        else
        printf("resposta: 0");
    }

    if(num1>num2 && num1<num3 && num2<num3)
    {
        grande = num3;
        med = num1;
        peq = num2;

        if((grande - med) == (med - peq))
        printf("resposta: 1");
        else
        printf("resposta: 0");
    }

    if(num1>num2 && num1>num3 && num2<num3)
    {
        grande = num1;
        med = num3;
        peq = num2;

        if((grande - med) == (med - peq))
        printf("resposta: 1");
        else
        printf("resposta: 0");
    }


    return 0;

}

