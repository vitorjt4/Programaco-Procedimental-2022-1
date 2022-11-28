/*
* Arquivo: somaPrimos.c
* Autor: Victor José Teixeira da Silva
* Data: 27/11/2022
*/

#include <stdio.h>
#include <stdbool.h>

int main (void){
    int n, sum = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n != 2 && n % 2 == 0)
        return false;
    for (int i = 2; i < n; i++){
        if (n % i == 1){
            sum += i;
        }
    }

    printf("%d", sum);


    
    return 0;
}
