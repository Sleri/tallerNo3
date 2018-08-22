#include <iostream>
#include <stdio.h>
using namespace std;

/* 
* Programa: Numeros multiplos de 4 entre 64 y 4
* Fecha: 21 de agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

int main(int argc, char *argv[]) {
	//variables
	int num;
	//ciclo para tomar multiplos de 4
	for(num = 64; num >= 4; num += -4){
		printf("%d\n", num);
	}
	
	return 0;
}
