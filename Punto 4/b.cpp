#include <iostream>
#include <stdio.h>
using namespace std;

/* 
* Programa: Programa que suma los numeros impares desde 1 al 50
* Fecha: 22 de agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

int main(int argc, char *argv[]) {
	//variables
	int contador = 0, numero = 1;
	
	//sentencia para imprimir los numeros
	while(numero <= 50){
		
	//condicion para saber si son impares
		if(numero % 2 == 1)
		{
			contador = numero + contador;
			numero++;
		}else{
			numero++;
		}
	}
	printf("La suma de los impares es: %d", contador);
	
	
	
	return 0;
}
