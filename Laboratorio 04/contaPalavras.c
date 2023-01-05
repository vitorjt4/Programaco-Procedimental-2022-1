/*
 * Arquivo: bin2dec.c
 * Autor: Victor José Teixeira da Silva
 * Criado em: 10/ dec/ 2022
 * This program should be able to count how many words were written.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
void main()
{
    char s[200];
    int count = 0, i;
 
    printf("EDigite uma frase:\n");
    fgets(line, sizeof(line), stdin); // take input


   for (int i = 0, j; line[i] != '\0'; ++i) {

      // enter the loop if the character is not an alphabet
      // and not the null character
      while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == ' ') && !(line[i] == '\0')) {
         for (j = i; line[j] != '\0'; ++j) {

            // limpa a string de qualquer symbolo
 
            line[j] = line[j + 1];
         }
         line[j] = '\0';
      }
   }
   printf("Output String: ");
   puts(line);

   for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);
     
   return 0;
}
    /*
      scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);
}
    
    */
  