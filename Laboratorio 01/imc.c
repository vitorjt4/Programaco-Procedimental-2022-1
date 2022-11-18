/*
* Arquivo: imc.c
* Autor: Victor José Teixeira da Silva
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    
    float altura, peso, resultado;


    printf("Informe sua altura: ");
    scanf("%f", &altura);

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    altura *= altura;
    resultado = peso / altura;

    if(resultado < 18.5)
    {
    printf("\nVoce esta abaixo do peso, seu imc é: %.2f", resultado);
    } else if(resultado >= 18.5 && resultado < 25)
    {
        printf("\n Voce está na faixa normal de peso, seu imc é: %.2f", resultado);
    } else if(resultado >= 25 && resultado < 30)
    {
        printf("\n Voce está com sobrepeso, seu imc é: %.2f", resultado);
    } else if(resultado >= 30 && resultado < 35)
    {
        printf("\nVoce está com obesidade Grau 1, seu imc é: %.2f", resultado);
    } else if(resultado >=35 && resultado < 40)
    {
        printf("\nVoce está com obesidade grau 2, seu imc é: %.2f", resultado);
    } else
    {
        printf("\nVoce está com obesidade grau 3, seu imc é: %.2f", resultado);
    }



    return 0;
}