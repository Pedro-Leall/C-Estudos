/*
	Name: 
	Author: 
	Date: 09/04/25 15:20
	Description: Fa�a um algoritmo que leia os valores de A, B, C e em seguida imprima na tela a soma entre A e B � mostre se a soma � menor que C.
*/

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");	
	int A, B, C, SOMA;
	A = B = C = SOMA = 0;
	
	puts("Por favor digite o valor 1: ");
	scanf("%i", &A);
	puts("Por favor digite o valor 2: ");
	scanf("%i", &B);
	puts("Por favor digite o valor 3: ");
	scanf("%i", &C);
	
	SOMA = A + B;
	
	if(SOMA > C){
		printf("%i + %i � maior que %i", A, B, C);
	}else if(SOMA < C){
		printf("%i + %i � menor que %i", A, B, C);
	}else{
		printf("%i + %i � igual � %i", A, B, C);
	}
	
};
