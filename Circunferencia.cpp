/*
	*Name: Circuferencia.cpp
	*Author: Pedro Leal e Maria Sinis - Santana SPB 
	*Date: 11/03/25 12:04
	*Description: Programa para calcular o valor da circunferencia de um circulo.
*/

#include <stdio.h>

main(){
	float raio, Pi, Perimetro;
	raio = 0.0;
	Pi = 3.1416;
	Perimetro = 0.0;
	puts("Calculando o perimetro \n");
	
	printf("Digite o raio da circunferencia: ");
	scanf("%f",&raio);
	
	Perimetro = 2* raio * Pi;
	
	printf("O perimetro da circunferencia é de: %f", Perimetro);
	
}
