/*
* Arquivo: impares.c
* Autor: Victor José Teixeira da Silva
* Data: 27/11/2022
*/

#include<stdio.h>

int main(void) {
    int m, n;


    printf("Escolha um intervalo entre numeros, partindo do menor para o maior:\n");
    scanf("%d %d", &m, &n);
    
    for (int i = m; i <= n; i++) {
        if (i % 2 == 1)
        printf ("%d, ", i);
        }
    
    return 0;
    
    }