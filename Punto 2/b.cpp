#include <iostream>
#include <stdio.h>
using namespace std;
/*
* Programa: Programa que calcula el numero menor entre tres
* Fecha: 19 de Agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

//fucion principal
int main(int argc, char *argv[]) {
	int numero1, numero2, numero3;
	printf("Ingrese el primer numero de tres para saber cual es el mayor\n");
	scanf("%d", &numero1);
	printf("Ingrese el segundo numero\n");
	scanf("%d", &numero2);
	printf("Ingrese el tercer numero\n");
	scanf("%d", &numero3);
	
	if(numero1 > numero2  && numero1 > numero3){ //comparacion entre los numeros
		printf("El numero mayor es: %d", numero1);
	}else{
		if(numero2 > numero1 && numero2 > numero3){
			printf("El numero mayor es: %d", numero2);
		}else{
			printf("El numero mayor es: %d", numero3);
		}
	}
	
	
	return 0;
}




