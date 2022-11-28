/*
* Arquivo: primo.c
* Autor: Victor José Teixeira da Silva
* Data: 24/11/2022
*/

#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n);

int main (void){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("O numero %d %sé primo\n", n, ehPrimo(n)? "" : "NÃO ");
    return 0;
}

bool ehPrimo(int n){
    if(n != 2 && n % 2 == 0)
        return false;
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}