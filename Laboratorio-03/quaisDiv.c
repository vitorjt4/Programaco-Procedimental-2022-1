/*
 * Arquivo: quaisDiv.c
 * Data criação: 04/12/2022
 * Autor: Victor José Teixeira da Silva
 */

#include <stdio.h>

int main(){

    int n, r = 0;
    printf("Quantos numeros vc quer??\n");
    scanf("%d", &n);

    int vetor[n];

    for(int i=0; i < n; i++) {
        printf("Seu %d numero:\t", i+1);
        
        scanf("%d", vetor+i);
    }

    printf("Digite o numero que vc quer verificar:\n");
    scanf("%d", &r);

    for(int i=0; i < n; i++) {
        if(r%vetor[i])
            printf("%d ", vetor[i]);
        if(!(r%vetor[i]))
            printf("%d# ", vetor[i]);
    }

return 0;
}