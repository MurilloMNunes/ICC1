#include <stdio.h>
#include <stdlib.h>
#define MAX 2

typedef struct{
float num1;
float num2;
} complexos;

void soma(complexos n[MAX]);
void subt(complexos n[MAX]);
void mult(complexos n[MAX]);

int main()
{
    complexos nums[MAX];
    int i, op;

    for(i=0;i<MAX;i++)
    {
        nums[i].num1 = 0;
        nums[i].num2 = 0;
    }

    for(i=0;i<1;i++)
    {
        scanf("%f%f",&nums[i].num1,&nums[i+1].num1);
        scanf("%f%f",&nums[i].num2,&nums[i+1].num2);
    }

    scanf("%d",&op);

    if(op==1)
    soma(nums);

    if(op==2)
    subt(nums);

    if(op==3)
    mult(nums);

    return 0;
}

void soma(complexos n[MAX])
{
    float soma_real=0, soma_comp=0;

    soma_real = n[0].num1 + n[0].num2;
    soma_comp = n[1].num1 + n[1].num2;

    printf("%.2f + %.2fi",soma_real,soma_comp);
}

void subt(complexos n[MAX])
{
    float sub_real=0, sub_comp=0;

    sub_real = n[0].num1 - n[0].num2;
    sub_comp = n[1].num1 - n[1].num2;

    printf("%.2f + %.2fi",sub_real,sub_comp);
}

void mult(complexos n[MAX])
{
    float mult_real=0, mult_comp=0;

    mult_real = (n[0].num1*n[0].num2) - (n[1].num1*n[1].num2);
    mult_comp = (n[0].num1*n[1].num2) + (n[1].num1*n[0].num2);

    printf("%.2f + %.2fi",mult_real,mult_comp);
}
