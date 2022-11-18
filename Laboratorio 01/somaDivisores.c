/*
* Arquivo: somaDivisores.c
* Autor: Victor José Teixeira da Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, sum = 0;

	printf("Digite um numero, inteiro e positivo: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num / 2; ++i) {
		if (num % i == 0) { // Se o resto da divisão for 0, então esse é o divisor do numero 
			sum += i; // Soma o resultado na variavel 
        }   
    }  
     printf("The sum of all positive divisors of %d is %d");
     
     return 0;
     }
