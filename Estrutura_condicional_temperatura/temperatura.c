#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp_a, temp_b;

    scanf("%d %d", &temp_a, &temp_b);

    if((temp_a<0 && temp_b>100) || (temp_b<0 && temp_a>100))
    printf("%d, %d: 1", temp_a, temp_b);

    else
    printf("%d, %d: 0", temp_a, temp_b);

    return 0;
}
