/*
 * Arquivo: inside.c
 * Autor: Victor José Teixeira da Silva
 * Criado em: 15 / JAN/ 2023
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1024

int contem(char * s1, char * s2);
void getstr(char * str, long long int nchar);

int main(void) {
    char s1[N];
    char s2[N];
    int idx;
    printf("Entre com uma string: ");
    getstr(s1, N);
    printf("Entre com outra string: ");
    getstr(s2, N);
    idx = contem(s1, s2);
    if(idx >= 0) {
        for(int i = 0; i < strlen(s2); i++) {
            if(i == idx) printf("*");
            printf("%c", s2[i]);
            if(i == idx+strlen(s1)-1) printf("*");
        }
        printf("\n");
    } else
        printf("mensagem que não está contida\n");
    return EXIT_SUCCESS;
}

int contem(char * s1, char * s2) {
    int i, j;
    int n1 = strlen(s1), n2 = strlen(s2);
    for(i = 0; i < n2; i++) {
        if(s1[0] == s2[i]) {
            for(j = 1; j < n1; j++) {
                if(i+j >= n2) return -1;
                if(s1[j] != s2[i+j]) break;
            }
            if(j == n1) return i;
        }
    }
    return -1;
}

void getstr(char * str, long long int nchar) {
    char c;
    long long int i;
    for(i = 0; i < nchar && (c = getchar()) != '\n'; i++)
        str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar) // precisa limpar o buffer do teclado
        while ((c = getchar()) != '\n' && c != EOF);
}