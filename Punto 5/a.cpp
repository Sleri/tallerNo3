#include <iostream>
#include <stdio.h>
using namespace std;

/* 
* Programa: Tabla de multiplicar usando do-while
* Fecha: 22 de agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

int main(int argc, char *argv[]) {
	//variables
	char c;
	int i, num;
	//inicia repira mientras para multiplicar
	do{
		printf("Introduzca un numero entero: ");
		scanf("%d", &num);
		printf("\nLa tabla de multiplicar del numero %d es:\n\n", num);
		
		//iniciamos tabla de multiplicar
		for(i = 0; i <= 10; i++){
			printf("%d * %d = %d\n", i, num, i * num);
			
		}
		printf("\n desea visualizar otra tabla de multiplicar (s/n) ?: \n");
		fflush(stdin);
		scanf("%c", &c);
		printf("\n");
		
	} while(c != 'n');
	
	
	return 0;
}
