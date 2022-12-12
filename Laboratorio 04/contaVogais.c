/*
 * Arquivo: contaVogais.c
 * Autor: Victor José Teixeira da Silva
 * Criado em: 10/ dec/ 2022
 * This program should be able to indentify all the vowels in a sentence written by the user.
*/

#include<stdio.h>
#include <string.h>

#define N 100

int count_vowels(char []);
int check_vowel(char);
// void getstr(char * str, int nchar);

int main()
{
   char vetor[N];
   int counts;
   
   printf("Escreva uma sentença\n");
   fgets(vetor);
   
   counts = count_vowels(vetor);
   
   printf("O numero de vogais em sua sentença é: : %d\n", counts);
   
   return 0;
}

int count_vowels(char a[])
{
   int count = 0, c = 0, flag;
   char d;
   
   do
   {  
      d = a[c];
     
      flag = check_vowel(d);
     
      if (flag == 1)
         count++;
     
      c++;
   } while (d != '\0');
   
   return count;
}


int check_vowel(char ch)
{
   if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      return 1;
 
   if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
      return 1;
   
   return 0;
}

/*void getstr(char * str, int nchar){
    char c, ch;
    for (int i = 0; i < nchar; i++)
    {
        c = getchar();
       /*if(c != '\n'){
            str[i] = c;
        }else{
            str[i] = '\0';
            break;
         
    }
    
    str[nchar-1] = '\0';
    while ((c = getchar() != '\n' && c != EOF)); //limpa buffer do teclado
    }

    }*/
