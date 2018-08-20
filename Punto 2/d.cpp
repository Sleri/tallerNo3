#include <iostream>
#include <stdio.h>
using namespace std;
/*
* Programa: Programa que calcula si un caracter es vocal y si éste es mayuscula o minuscula
* Fecha: 19 de Agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/


//funcion principal
int main(int argc, char *argv[]) {
	char vocal;
	printf("Ingrese un caracter\n");
	scanf("%c", &vocal);
	if(vocal == 'A' || vocal == 'E' || vocal == 'I' || vocal == 'O' || vocal == 'U'){
		printf("Es una vocal mayuscula\n");
	}else{
		if(vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u'){
			printf("Es una vocal minuscula\n");
		}else{
			printf("No es una vocal\n");
		}
	}
	
	return 0;
}








