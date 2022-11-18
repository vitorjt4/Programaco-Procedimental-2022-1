/*
* Arquivo: fibonacci.c
* Autor: Victor José Teixeira da Silva
*/

#include <stdio.h>
#include <stdlib.h>
  
/* int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
} */
  
int fib(int n)
{

    //int n, fib;
    printf("Digite um numero: ");
    scanf("%d", n);

    for (int i = n; i > 0; i--)
    {
        fib (n - 1) + fib(n - 2);
    }
    
    /*if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2); */

    printf("%d", fib);
    getchar();
    return 0;
}
    
