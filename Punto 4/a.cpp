#include <iostream>
#include <stdio.h>
using namespace std;

/* 
* Programa: Programa que imprime en pantalla los numeros del 1 al 50
* Fecha: 22 de agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

int main(int argc, char *argv[]) {
	//variables
	int numero = 1;
	
	//sentencia para imprimir los numeros
	while(numero <= 50){
		printf("%d\n", numero);
		numero = numero + 1;
	}
	
	
	
	
	return 0;
}
