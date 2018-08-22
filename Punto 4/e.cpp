#include <iostream>
#include <stdio.h>
using namespace std;

/* 
* Programa: Programa que calcula 
* Fecha: 22 de agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

int main(int argc, char *argv[]) {
	//variables
	float lado, resultado;
	
	printf("Ingrese un lado del cubo: ");
	scanf("%f", &lado);
	
	//mientras el lado sea diferente de 0
	while(lado != 0){
		resultado = lado * lado;
		printf("El area del cubo es: %.2f\n", resultado * 6);
		printf("\nIntroduzca el lado de otro cubo al que desea hayarle el area: ");
		scanf("%f", &lado);
	}
	
	printf("\nNo se pudo calcular el area ya que ingreso 0");
	
	return 0;
}
