#include <iostream>
#include <stdio.h>
using namespace std;

/* 
* Programa: Programa que suma la cantidad de numeros enteros ingresados usando do-while
* Fecha: 22 de agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

int main(int argc, char *argv[]) {
	//variables
	int num, contador = 0;
	
	//inicia hacer mientras para sumar
	do{
		printf("Introduzca un numero: ");
		scanf("%d", &num);
		contador = num + contador;
		
	} while(num != 0);
		printf("\nLa suma de los numeros es: %d", contador);
		
	
	return 0;
}
