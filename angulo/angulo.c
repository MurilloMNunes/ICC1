#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ang_1, ang_2, ang_3;

    scanf("%d %d", &ang_1, &ang_2);

    if((ang_1+ang_2)<180)
      {
          ang_3 = 180 - (ang_1+ang_2);
          printf("%d, %d: %.d", ang_1, ang_2, ang_3);
      }

    if((ang_1+ang_2)>=180)
    {
        printf("%d, %d: erro", ang_1, ang_2);
    }



    return 0;
}
