#include <iostream>
#include <stdio.h>
using namespace std;
/*
* Programa: Programa que calcula si un numero es par o impar
* Fecha: 19 de Agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/


//funcion principal
int main(int argc, char *argv[]) {
	int digito;
	printf("Ingrese un numero\n");
	scanf("%d", &digito);
	if(digito % 2 == 0){  //division para obtener el residuo
		printf("Es par\n");
	}else{
		printf("Es impar\n");
	}
	
	
	return 0;
}








