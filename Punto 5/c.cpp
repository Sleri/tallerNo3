#include <iostream>
#include <stdio.h>
using namespace std;

/* 
* Programa: Programa que calcula diferentes operaciones a un numero
* Fecha: 22 de agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

int main(int argc, char *argv[]) {
	//variables
	int num, contador = 0, contador2 = 0;
	char c;
	
	//inicia hacer mientras para hacer la operacion 
	do{
		printf("Introduzca un numero: ");
		scanf("%d", &num);
		printf("%d * %d - %d = %d", num, num, num, ((num * num) - num));
		contador = num + contador;
		contador2 = contador2 + 1;
		
		printf("\nDesea introducir otro numero (s/n) ?: \n");
		fflush(stdin);
		scanf("%c", &c);
		
	} while(c != 'n');
		printf("\nLa suma de los numeros es: %d", contador);
		printf("\nIngreso: %d numeros", contador2);
	
	return 0;
}
