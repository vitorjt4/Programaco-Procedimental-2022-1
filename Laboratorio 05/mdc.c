/*
 * Arquivo: md.c
 * Autor: Victor José Teixeira da Silva
 * Criado em: 07/ dec/ 2023
 * 
*/

#include <stdio.h>
int main()
{
    int n1, n2, i, mdc;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            mdc = i;
    }

    printf("%d", mdc);

    return 0;
}