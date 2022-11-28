/*
* Arquivo: maxHappyPrime.c
* Autor: Victor José Teixeira da Silva
* Data: 27/11/2022
*/

#include <stdbool.h>
#include <stdio.h>
 

int sumDigitSquare(int n);
bool isHappy(int n);

int main()
{
    int n ;

    printf("Digite um numero: ");
    scanf("%d", n);
    if (isHappy(n))
        printf("Sim\n");
    else
        printf("Não\n");
    return 0;
}

int sumDigitSquare(int n)
{
    int sq = 0;
    while (n) {
        int digit = n % 10;
        sq += digit * digit;
        n = n / 10;
    }
    return sq;
}

bool isHappy(int n)
{
    // Continua substituindo n com a soma dos quadrados
    // até alcançar 1 ou quebrar o laço
    while (1) {
        // O
        if (n == 1)
            return true;
        
        n = sumDigitSquare(n);
        
        if (n == 4)
            return false;
    }
    return false;
}