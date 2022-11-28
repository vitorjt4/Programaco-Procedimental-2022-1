/*
* Arquivo: somaSeqHailst.c
* Autor: Victor José Teixeira da Silva
* Data: 27/11/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int starting, length;

    /* initialize starting value */
    srand( (unsigned)time(NULL) );
    starting = (rand() % 100) + 1;
    length = 1;

    printf("Sequence: %3d ",starting);
    while(starting != 1)
    {
        if( starting % 2 )  /* true if odd */
            starting = (starting*3)+1;
        else                /* even */
            starting /= 2;
        printf("%3d ",starting);
        length++;
    }
    printf("\nSequence length: %d\n",length);

    return(0);
}
