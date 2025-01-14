#include <stdio.h>
#include <stdlib.h>

typedef struct{
double num1;
double num2;
}complexos;

void soma();
void divisao();
void mult();
void printComplexo();

int main()
{
    complexos nums[2], resultados[2];
    int op, op2;

    scanf("%d",&op);
    do
    {
        scanf("%lf%lf",&nums[0].num1,&nums[1].num1);
        scanf("%lf%lf",&nums[0].num2,&nums[1].num2);
        scanf("%d",&op2);
        if(op==1)
            soma(nums,&resultados);

        if(op==2)
            divisao(nums,&resultados);

        if(op==3)
            mult(nums,&resultados);

         if(op2==4)
            printComplexo(resultados);

        scanf("%d",&op);
    }while(op!=0);

    return 0;
}

void soma(complexos n[], complexos *res)
{
    res[0].num1 = n[0].num1 + n[0].num2;
    res[0].num2 = n[1].num1 + n[1].num2;
}

void divisao(complexos n[], complexos *res)
{
    res[0].num1 = ((n[0].num1*n[0].num2)+(n[1].num1*n[1].num2))/((n[0].num2*n[0].num2)+(n[1].num2*n[1].num2));
    res[0].num2 = ((n[1].num1*n[0].num2)-(n[0].num1*n[1].num2))/((n[0].num2*n[0].num2)+(n[1].num2*n[1].num2));
}

void mult(complexos n[], complexos *res)
{
    res[0].num1 = (n[0].num1*n[0].num2) - (n[1].num1*n[1].num2);
    res[0].num2 = (n[0].num1*n[1].num2) + (n[1].num1*n[0].num2);
}

void printComplexo(complexos res[])
{
    printf("%.2lf", res[0].num1);
    if (res[0].num2 >= 0)
    {
        printf("+");
    }
    printf("%.2lfi\n", res[0].num2);
}
