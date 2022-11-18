/*
* Arquivo: fatorial.c
* Autor: Victor José Teixeira da Silva
*/

#include <stdio.h>
int main() {
    int num;
    int fat;

    printf("Enter an integer greater than 1: ");
    scanf("%d", &num);

    if (num > 1) {
        while (num > 1) {
            fat = num * (num - 1); //factorial calculation using multiplication and subtraction.  This is the same as multiplying all the numbers from 2 to n, where n is equal to the number entered by user.  The loop ends when it reaches one since that's what we're after.  

        }

        printf("The factorial of %d is %d", num, fat);
    }
    
    return 0;
    }