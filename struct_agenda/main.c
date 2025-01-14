#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
char dia[3], mes[3], ano[5], hora[3], min[3], seg[3];
char ativ[100];
} agenda;

int main()
{
    int num, i;

    scanf("%d",&num);

    agenda ag[num];

    for(i=0;i<num;i++)
    {
        strcpy(ag[i].dia,"NULL");
        strcpy(ag[i].mes,"NULL");
        strcpy(ag[i].ano,"NULL");
        strcpy(ag[i].hora,"NULL");
        strcpy(ag[i].min,"NULL");
        strcpy(ag[i].seg,"NULL");
        strcpy(ag[i].ativ,"NULL");
    }

    for(i=0;i<num;i++)
    {
        scanf("%s\n%s\n%s\n",ag[i].dia,ag[i].mes,ag[i].ano);
        scanf("%s%s%s\n",ag[i].hora,ag[i].min,ag[i].seg);
        fgets(ag[i].ativ,100,stdin);
    }

    for(i=0;i<num;i++)
    {
        printf("%s/%s/%s - %s:%s:%s\n%s",ag[i].dia,ag[i].mes,ag[i].ano,ag[i].hora,ag[i].min,ag[i].seg,ag[i].ativ);
    }

    return 0;
}
