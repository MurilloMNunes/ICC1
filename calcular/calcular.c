#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, res;

    scanf("%f %f", &a, &b);

    if((a+b)<10)
        res = (a+b)*(a+b);

    else
        res = ((a+b)*(a+b))/(a+b);


        printf("%.2f, %.2f: %.2f", a, b, res);

    return 0;
}
