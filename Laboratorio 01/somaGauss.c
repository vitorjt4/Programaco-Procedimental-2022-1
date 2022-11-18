/*
* Arquivo: somaGauss.c
* Autor: Victor José Teixeira da Silva
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned short int n; //Como não teremos numeros negativos, definimos "n" um numero sem sinal
	unsigned long int sum = 0;

	printf("Digite um numero natural: ");
	scanf("%hu", &n);

	sum = n*(n+1)/2;

	printf("A soma dos primeiros %hu numeros naturais é: %lu", n, sum);

	return 0;
}

