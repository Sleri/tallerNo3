#include <iostream>
#include <stdio.h>
using namespace std;
/*
* Programa: Programa que calcula el dia de la semana correspondiente
* Fecha: 19 de Agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/


//funcion principal
int main(int argc, char *argv[]) {
	int diaSemana;
	printf("Ingrese un numero del 1 al 7 para saber el dia de la semana\n");
	scanf("%d", &diaSemana);
	if(diaSemana >= 1 && diaSemana <= 7){ //Condicion principal
		if(diaSemana == 1){
			printf("Es domingo\n");
		}else{
			if(diaSemana == 2){
				printf("Es lunes\n");
			}else{
				if(diaSemana == 3){
					printf("Es martes\n");
				}else{
					if(diaSemana == 4){
						printf("Es miercoles\n");
					}else{
						if(diaSemana == 5){
							printf("Es jueves\n");
						}else{
							if(diaSemana == 6){
								printf("Es viernes\n");
							}else{
								if(diaSemana == 7){
									printf("Es sabado\n");
								}
							}
						}
					}
				}
			}
		}
	}else{
		printf("Ingreso un numero fuera del rango\n");
	}
	return 0;
}



