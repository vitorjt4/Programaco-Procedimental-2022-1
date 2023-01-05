/*
 * Arquivo: palindrono.c
 * Autor: Victor José Teixeira da Silva
 * Criado em: 10/ dec/ 2022
 * This program should be able to recognize any sentence, that wrote backwords, has the same spelling.
*/


#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	printf("Digite uma frase: ");
	scanf("%s", str);

	int strSize = strlen(str);
	if (strSize > 20) {
		printf("\nRespeite o limite de tamanho!");
		return 0;
	}

	// reverse 'str' and store in 'strReversed'
	char strReversed[20];
	for (int i = strSize - 1; i >= 0; --i) {
		strReversed[strSize - 1 - i] = str[i];
	}


	if (strcmp(str, strReversed) == 0) {
		printf("\n%s é um palindrono", str);
	}
	else {
		printf("\n%s não é um palindrono", str);
	}
	return 0;
}
