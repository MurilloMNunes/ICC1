#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, quad, dezm, centm, mi, mil, cent, dez, un;

    scanf("%d", &n);

    quad = n*n;

    mi = quad/1000000;
    centm = (quad/100000)%10;
    dezm = (quad/10000)%10;
    mil = (quad/1000)%10;
    cent = (quad/100)%10;
    dez = (quad/10)%10;
    un = quad%10;

    if(quad<10)
    {
        switch(un)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }

    }

    if(quad>=10 && quad<100)
    {
        switch(dez)
    {
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


     switch(un)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }

    }

    if(quad>=100 && quad<1000)
    {
        switch(cent)
    {
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


     switch(dez)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


     switch(un)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }

    }

    if(quad>=1000 && quad<10000)
    {
        switch(mil)
    {
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }

     switch(cent)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


     switch(dez)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


     switch(un)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }

    }

    if(quad>=10000 && quad<100000)
    {
        switch(dezm)
    {
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


    switch(mil)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }

     switch(cent)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


     switch(dez)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


     switch(un)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }

    }

    if(quad>=100000 && quad<1000000)
    {
        switch(centm)
    {
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


        switch(dezm)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


    switch(mil)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }

     switch(cent)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


     switch(dez)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


     switch(un)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }

    }

    if(quad>=1000000 && quad<10000000)
    {
         switch(mi)
    {
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }

        switch(centm)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


        switch(dezm)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


    switch(mil)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }

     switch(cent)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


     switch(dez)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }


     switch(un)
    {
        case 0: printf("Zero "); break;
        case 1: printf("Um "); break;
        case 2: printf("Dois "); break;
        case 3: printf("Tres "); break;
        case 4: printf("Quatro "); break;
        case 5: printf("Cinco "); break;
        case 6: printf("Seis "); break;
        case 7: printf("Sete "); break;
        case 8: printf("Oito "); break;
        case 9: printf("Nove "); break;
    }

    }



    return 0;
}
