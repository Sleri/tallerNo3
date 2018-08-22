#include <iostream>
#include <stdio.h>
using namespace std;

/* 
* Programa: Programa que calcula cuadrados de los numeros diez numeros naturales
* Fecha: 21 de agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

int main(int argc, char *argv[]) {
	//variables
	int i;
	
	//contador para la multiplicacion
	for(i = 1; i <= 10; i ++){
		printf("%d * %d = %d\n", i, i, i * i);
	}
	return 0;
}
