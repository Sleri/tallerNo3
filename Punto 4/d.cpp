
#include <iostream>
#include <stdio.h>
using namespace std;

/* 
* Programa: Programa que calcula la mitad de un numero siempre y cuando el numero ingresado sea distinto a 0 y 1
* Fecha: 22 de agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

int main(int argc, char *argv[]) {
	//variables
	float num;
	printf("Introduzca un numero real: ");
	scanf("%f", &num);
	
	//mientras que el numero sea diferente de 0 y 1
	
	while(num !=0 && num !=1){
		
		printf("La mitad de %.2f es: %.2f\n", num, num/2);
		printf("\nIntroduzca otro numero real : ");
		scanf("%f", &num);
		
	}
	
	return 0;
}
