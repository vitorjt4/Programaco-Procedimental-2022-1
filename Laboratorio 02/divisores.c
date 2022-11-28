/*
* Arquivo: divisores.c
* Autor: Victor José Teixeira da Silva
* Data: 27/11/2022
*/

#include <stdio.h>


void printDivisors(int n);


int main()
{

    int n;
     printf("Escolha um numero e eu lhe direi todos seus divisores:\n");
    scanf("%d", &n);
    printf("Os divisores de %d \n", n);
    printDivisors(n);
    return 0;
}

void printDivisors(int n)
{
    for (int i=1;i<=n;i++)
        if (n%i==0)
            printf("%d ",i);
}