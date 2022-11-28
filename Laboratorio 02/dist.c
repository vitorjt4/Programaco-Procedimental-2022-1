/*
* Arquivo: dist.c
* Autor: Victor José Teixeira da Silva
* Data: 27/11/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    float x1, y1, x2, y2; //Coordenadas dos pontos A e B

	printf("Digite as Coordenadas do ponto A: ");
	scanf("%f %f", &x1, &y1);

	printf("Digite as Coordenadas do ponto B: ");
	scanf("%f %f", &x2, &y2);

	float dist = sqrt((pow(x2 - x1), 2) + (pow(y2 - y1), 2));

    printf("A distancia euclidiana entre os pontos A e B é %.2f", &dist);


    return 0;
    }