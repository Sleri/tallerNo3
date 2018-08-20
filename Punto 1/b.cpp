/*
* Programa: Programa que calcula la cantidad de dolares en pesos colombianos
* Fecha: 16 de Agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/
#include <iostream>
#include <stdio.h>
using namespace std;

//funcion principal
int main(int argc, char *argv[]) {
	float dolar, colombiano, cantidadDolares;
	cantidadDolares = 0;
	dolar = 0;
	colombiano = 0;
	printf("Ingrese el valor de un dolar en pesos colombianos \n");
	scanf("%f", &dolar);
	printf("Ingrese la cantidad de dolares que tiene y que desea saber en cuanto son en pesos colombianos \n");
	scanf("%f", &cantidadDolares);
	colombiano = dolar * cantidadDolares;
	printf("Tiene %2.0f en pesos colombianos \n", colombiano);
	
	return 0;
}


