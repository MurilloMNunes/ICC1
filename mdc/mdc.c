#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, mdc1, mdc, a1, b1;

    while((scanf("%d %d %d",&a,&b,&c))==3)
    {

        if(a>b)
        {
            b1 = b;

            while((a%b1)!=0 || (c%b1)!=0)
            {
                --b1;
            }
            mdc1 = b1;


        }
        if(a<b)
        {
            a1 = a;

            while((b%a1)!=0 || (c%a1)!=0)
            {
                --a1;
            }
            mdc1 = a1;

        }
        if(a==b && a==c)
        {
            mdc1 = a;
            printf("%d", a);
            continue;
        }

        if(mdc1>c)
        {
            while(((mdc1%c)!=0) || ((a%c)!=0) || ((b%c)!=0))
            {
                --c;
            }
            mdc = c;

        }
        else if(mdc1<c)
        {
            while(((c%mdc1)!=0) || ((a%mdc1)!=0) || ((b%mdc1)!=0))
            {
                --mdc1;
            }
            mdc = mdc1;
       }
       else if(mdc1==c){
             mdc = 1;}

       printf("%d\n",mdc);
    }

    return 0;
}
