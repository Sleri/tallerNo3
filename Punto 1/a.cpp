/*
* Programa: Programa que calcula el area de un triangulo
* Fecha: 16 de Agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/
#include <iostream>
#include <stdio.h>
using namespace std;


//funcion principal
int main(int argc, char *argv[]) {
	int base, altura, area;
	area = 0;
	base = 0;
	printf("Ingrese la base del triangulo\n");
	scanf("%d", &base);
	printf("Ingrese la altura del triangulo\n");
	scanf("%d", &altura);
	area = (base * altura)/2;
	printf("El area del triangulo es: %d \n", area);
	
	return 0;
}

