/*
 * Arquivo: reverteString.c
 * Autor: Victor José Teixeira da Silva
 * Criado em: 12/ dec/ 2022
 * This program should be able to write a sentence backwards.
*/


#include<stdio.h>
#include <string.h>

int str_len( char *st);  
void revstr( char *st);  
int main()  
{  
    char st[50];  
    printf ("Escreva uma sentença: ");  
    scanf( "%s", st);  
      
    revstr(st);   
      
    printf ("A frase de tras pra frente é: %s", st);  
    return 0;  
}  
  
void revstr (char *st)  
{  
    int len, i;  
    char *start, *end, temp;  
      
    len = str_len (st);  
    start = st;  
    end = st;  
      
    for (i = 0; i < len - 1; i++)  
    end++;  
      
    for (i = 0; i < len/2; i++)  
    {  
        temp = *end;  
        *end = *start;  
        *start = temp;  
          
        start++;  
        end--;  
    }  
}  
  
int str_len (char *ptr)  
{  
    int i = 0;  
    while ( *(ptr + i) != '\0')  
    i++;  
    return i;  
}  