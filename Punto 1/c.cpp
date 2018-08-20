/*
* Programa: Programa que calcula el area de un rectangulo
* Fecha: 16 de Agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/
#include <iostream>
#include <stdio.h>
using namespace std;

//funcion principal
int main(int argc, char *argv[]) {
	int base, altura, area;
	base = 0;
	altura = 0;
	area = 0;
	printf("Ingrese la base del rectangulo \n");
	scanf("%d", &base);
	printf("Ingrese la altura del rectangulo \n");
	scanf("%d", &altura);
	area = base * altura;
	printf("El area del rectangulo es: %d \n", area);
	
	return 0;
}



