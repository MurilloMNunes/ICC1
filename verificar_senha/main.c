#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[1], s[] = {1450};

    scanf("%d",&n[0]);

    if(n[0]==s[0])
        printf("senha correta");

    else
        printf("senha incorreta");

    return 0;
}
