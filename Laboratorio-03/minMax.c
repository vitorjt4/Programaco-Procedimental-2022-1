/*
 * Arquivo: minMax.c
 * Data criação: 04/12/2022
 * Autor: Victor José Teixeira da Silva
 */

#include <stdio.h>
#include <stdlib.h>



int main(){

    int n, maior, menor =0;
    double *data;
    printf("Digite a quantidade de elementos que você deseja: \n");
    scanf("%d", &n);

    // Allocating memory for n elements
    data = (double *)calloc(n, sizeof(double));
    if (data == NULL) {
    printf("Error!!! memory not allocated.");
    exit(0);
  }

    
      // Storing numbers entered by the user.
    for (int i = 0; i < n; ++i) {
    printf("Digite o %d elemento: ", i + 1);
    scanf("%lf", data + i);
  }

  maior = *data;
  menor = *data;
// tryint to locate the largest and smallest
    for(int i=0; i < n; i++) {
    if(*data > maior)
        maior = *data;
    
    if (*data< menor)
        menor = *data; 
    }
    
     for(int i=0; i < n; i++) {
        if(*data == maior)
            printf("%d > ", maior);
        if(*data == menor)
            printf("%d < ", menor);
        if(*data != maior && *data != menor)
            printf("%.2lf ", *data);
    }

    free(data);



    return 0;
}
