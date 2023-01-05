/*
 * Arquivo: bin2dec.c
 * Autor: Victor José Teixeira da Silva
 * Criado em: 10/ dec/ 2022
 * This program should be able to count each character in any given sentence.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char frase[100]; frase[99] = '\0';
    int fraseLength = 0;
    int numero = 0; int letra = 0; int symb = 0;
    
    printf("digite uma frase: ");
    fgets(frase, 100, stdin);

    fraseLength = strlen(frase)-1;

    for(int i=0; fraseLength>=i; i++){

        if(isalnum(frase[i])){

            if(isalpha(frase[i])){
                letra = letra + 1;
            }

            if(isdigit(frase[i])){
                numero = numero + 1;
            }
        }

        if(!isalnum(frase[i]))
            symb = symb + 1;
    }


    printf("Letras %d\t", letra);
    printf("Digitos %d\t", numero);
    printf("Outros %d\t", symb);

return 0;
}