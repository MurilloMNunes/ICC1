#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;

    for(i=1000;i<=1999;i++)
    {
        num = i;

        if(num%11==5)
        printf("%d\n", num);
    }

    return 0;
}
