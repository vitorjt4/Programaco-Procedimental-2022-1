/*
* Arquivo: cosTaylor.c
* Autor: Victor José Teixeira da Silva
*/

#include <stdio.h>
#include <math.h>	// for cos() and sin() functions
#include <stdlib.h>

int main(void) {

	double x, n;

	printf("Escreva o numero de termos: ");
	scanf_s("%lf", &n);

	printf("Escreva o grau em radianos:");
	scanf_s("%lf", &x);

	double pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432632000500929081740197832087030168760088638044874308; // π constant 

    double sum = 0; // Guarda a soma da Serie 

    int i; // loop counter 

    for (i=1; i<=n; i++) { // loop from 1 to n+1 
        double term = pow(-1, i-1)*pow(x, 2*i-1)/factorial(2*i-1); // calculate each term in sequence 
        sum += term; // add it to the running total   }   printf("The value of e is %g

    }

    return 0;
}
