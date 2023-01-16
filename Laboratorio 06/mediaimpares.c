/*
 * Arquivo: mediaimpares.c
 * Autor: Victor José Teixeira da Silva
 * Criado em: 15/ JAN/ 2023
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct vector {
  int size;
  int arr[];
}vector;

int main(void){

    int n = 0, inicial;

    printf("Digite a quantidade de elementos: ");
    scanf("%d%*c", &n);
    vector *ptr = (vector * ) malloc(sizeof(vector * ) + n * sizeof(int));
  // Significa que 'ptr->arr' consegue conter 'n' elementos.
    
    printf("Digite o primeiro elemento: ");
    scanf("%d%*c", &inicial);
    for (int i = 0; i < n; i++){
        if (inicial % 2 == 0)
        {
            ptr -> arr + 1;
        }

        else
        ptr -> arr + 2; 

    }
     


    return 0;
}
