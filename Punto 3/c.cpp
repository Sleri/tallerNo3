#include <iostream>
#include <stdio.h>
using namespace std;

/* 
* Programa: Programa que calcula todos los numeros que hay entre el 1 y el 1000
* Fecha: 21 de agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

int main(int argc, char *argv[]) {
	//variables
	int i;
	
	//contador para numero pares del 1 al 1000
	for(i = 2; i <= 1000; i += 2){
		printf("Numero par: %d\n", i);
	}
	return 0;
}
