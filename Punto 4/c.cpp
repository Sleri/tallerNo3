#include <iostream>
#include <stdio.h>
using namespace std;

/* 
* Programa: Programa que suma los numeros primos desde el 1 al 50
* Fecha: 22 de agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

int main(int argc, char *argv[]) {
	//variables
	int contador, digito, i, n, suma = 0;
	digito = 50;
	n = 2;
	contador = 0;
	
	//mientras que n sea menor o igual a 50
	while (n <= digito) {
		
	//iniciaremos un ciclo con el que controlaremos los numeros primos
		for (i = 1; i <= n; i++) {
			if (n % i == 0) {
				contador = contador + 1;
			}
		}
	//si el contador es menor a 3 significa que es primo
		if (contador < 3) {
			suma = n + suma;
		}
		contador = 0;
		n = n + 1;
	}
	
	printf("La suma de los primos es: %d\n", suma);
	return 0;
}
