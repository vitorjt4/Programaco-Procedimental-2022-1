/*
 * Arquivo: minMax.c
 * Data criação: 04/12/2022
 * Autor: Victor José Teixeira da Silva
 * Identifies the largest and smallest number in the sequence by comparing it with its neighbors
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, max, min = 0;

    printf("Digite a quantidade de elementos que você deseja\n");
    scanf("%d", &n);
    int dados[n];

    for(int i=0; i < n; i++) {
        printf("Seu %d numero:\t", i+1);
        scanf("%d", dados+i);   
    }

    max = dados[0];
    min = dados[0];



    for(int i=0; i < n; i++) {
    if(dados[i] > max)
        max = dados[i];
    
    if (dados[i]< min)
        min = dados[i]; 
    }
    
     for(int i=0; i < n; i++) {
        if(dados[i] == max)
            printf("%d > ", max);
        if(dados[i] == min)
            printf("%d < ", min);
        if(dados[i] != max && dados[i] != min)
            printf("%d ", dados[i]);
    }

return 0;
}