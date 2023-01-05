/*
 * Arquivo: bin2dec.c
 * Autor: Victor José Teixeira da Silva
 * Criado em: 10/ dec/ 2022
 * This program should be able to convert any given number from the decimal to binary format.
*/

#include<stdio.h>    
#include<stdlib.h>  
#include<stdint.h>

int main(){  
uint64_t a[12345678902],n,i;    
system ("cls");  
printf("Qual numero voce deseja converter?: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\nEsse numero na base binaria corresponde a = ");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    
return 0;  
}  