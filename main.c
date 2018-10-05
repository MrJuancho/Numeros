#include <stdio.h>
#include <stdlib.h>
#include "promedio.h"

int main(int argc, char *argv[]) {
	float numero;
	float suma = 0;
	float cantidad = 0;
	
	printf("Ingresa numeros para realizar el promedio...\n");
	printf("Escribe 0 y termina el proceso\n");
	scanf("%f",&numero);
	float mayor = 0;
	float menor = 10000;
	while(numero!=0){
		suma = suma + numero;
		scanf("%f",&numero);
		fflush(stdin);
		cantidad++;
		if(numero>mayor){
			mayor = numero;
		}else if(numero<menor && numero > 0){
			menor = numero;
		}
	}
	printf("El numero mayor es  : %f\n",mayor);
	printf("El numero menor es  : %f\n",menor);
	Promedio(suma,cantidad);
	printf("MADE BY : Juan Carlos Calderon Davila\n");
	system("PAUSE");
	return 0;
}
