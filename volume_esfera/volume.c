#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    float vol;

    scanf("%d", &r);

    vol = (4*3.14*(r*r*r))/3;

    printf("(raio: %d, pi: 3.14) volume: %.2f", r, vol);

    return 0;
}
