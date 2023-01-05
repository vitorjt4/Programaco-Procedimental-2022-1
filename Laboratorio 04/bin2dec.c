/*
 * Arquivo: bin2dec.c
 * Autor: Victor José Teixeira da Silva
 * Criado em: 10/ dec/ 2022
 * This program should be able to convert any given number from binary to decimal format.
*/

#include <stdio.h>  
#include <conio.h>  
#include <math.h> 

int main()  
{  
      
    int i, bin_num, decimal_num = 0, rem;  
    printf ("Digite o numero binario para conversão \n");  
    scanf ("%d", &bin_num); 
      
    printf( " \n o numero é %d", bin_num);  
    for (i = 0; bin_num != 0; ++i)  
    {  
        rem = bin_num % 10;  
        bin_num = bin_num / 10;  
        decimal_num = decimal_num + (rem) * ( pow (2, i));  
          
    }  
     
    printf ("\n A conversão para a base 10 corresponde a %d", decimal_num);  
    getch();  
} 