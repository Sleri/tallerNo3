#include <iostream>
#include <stdio.h>
using namespace std;

/* 
* Programa: Programa que calcula el promedio de 3 notas para n estudiantes
* Fecha: 21 de agosto de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

int main(int argc, char *argv[]) {
	//variables
	int i, nEstudiantes;
	float nota1, nota2, nota3, promedio;
	printf("Ingrese el numero de estudiantes\n");
	scanf("%d", &nEstudiantes);
	
	//contador para calcular el promedio de los estudiantes
	for(i = 1; i <= nEstudiantes; i++){
		printf("Ingrese la primera nota\n");
		scanf("%f", &nota1);
		printf("Ingrese la segunda nota\n");
		scanf("%f", &nota2);
		printf("Ingrese la tercera nota\n");
		scanf("%f", &nota3);
		promedio = (nota1 + nota2 + nota3) / 3;
		printf("El promedio del %d estudiante es: %.2f\n", i, promedio);
	}
	return 0;
}
