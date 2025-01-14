#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=2, cont=0;

    scanf("%d",&n);

    while(i<=n)
    {
        if(n%i==0){
        while(n%i==0)
        {
            n = n/i;
            cont++;
        }
        printf("%d %d\n",i,cont);
        }
        i++;
        cont=0;
    }

    return 0;
}
