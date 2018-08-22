#include <iostream>
#include <stdio.h>
using namespace std;

/* 
* Programa: Programa que calcula el area de cinco circulos
* Fecha: 21 de agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

int main(int argc, char *argv[]) {
	//variables
	float area, radio;
	int i;
	
	//Realiza el calculo de 5 radios
	for(i = 1; i <= 5; i++){
		printf("Introduzca el radio %d: ", i);
		scanf("%f", &radio);
		area = 3.1416 * radio * radio;
		printf("\nEl area de la circunferencia %d es: %.2f\n", i, area);
	}
	return 0;
}
