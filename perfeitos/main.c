#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, soma;

    scanf("%d",&n);


    for(i=2;i<=n;i++)
    {
        soma = 0;
        for(j=2;j<=i;j++)
        {
            if((i%j)==0)
            {
                soma = soma + (i/j);
            }

        }
        if(soma==i)
        {
            printf("%d\n",i);
        }
    }




    return 0;
}
