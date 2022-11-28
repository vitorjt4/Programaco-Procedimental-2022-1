/*
* Arquivo: areaTriRet.c
* Autor: Victor José Teixeira da Silva
* Data: 27/11/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main()
{
    float xa, ya, xb, yb, xc, yc;
	printf("Digite as Coordenadas do ponto A: ");
	scanf("%f %f", &xa, &ya);

	printf("Digite as Coordenadas do ponto B: ");
	scanf("%f %f", &xb, &yb);

    xc = xb;
    yc = ya;

    
    float area = (((xb - xa) * (yb - ya))/2);

	printf("A area é %f metros quadrados", area);
	return 0;
}