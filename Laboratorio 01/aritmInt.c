/*
* Arquivo: aritmInt.c
* Autor: Victor José Teixeira da Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num1, num2;

    printf("Escreva dois inteiros: ");
    scanf("%d", &num1, "%d", &num2);

    //Addition of two numbers 
    int sum = num1 + num2;

    //Subtraction of two numbers 
    int diff = num1 - num2;

    //Multiplication of two numbers 
    int mul = num1 * num2;

    //Division of two numbers 
    double div = (double)num1 / (double)num2;

    printf("O resultado da soma dos numeros escolhidos é: %d\n", sum, "a diferença:  %d\n", diff, "o produto:  %d\n", mul,  "e a divisão:  %d\n", div);



    return 0;
}