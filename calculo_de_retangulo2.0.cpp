/*
	*Name:Area_do_Retangulo.cpp
	*Author: Pedro Leal e Maria - Fatec SPB
	*Date: 11/03/25 11:29
	*Description: Programa para calcular a area de um retângulo
*/
# include <stdio.h>
main(){
	float base, alt, area;
	base = 0.0;
	alt = 0.0;
	area = 0.0;
	
	puts("Digite a base do retangulo: ");
	scanf("%f", &base);
	puts("Digite a altura do retangulo: ");
	scanf("%f", &alt);
	area = base * alt;
	printf("Seu retangulo com base, %f e altura %f tem uma area de %.2f", base, alt, area);
}//fim

