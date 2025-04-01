/*
	Name: regressiva.cpp
	Author:Pedro Leal 
	Date: 01/04/25 11:56
	Description: Programa para regredir numericamente
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese"); 
	int num = 0;
	int i = 0;
	printf("Querido USER, digite um valor inteiro positivo: ");
	scanf("%d", &num);
	
	i= -num;

	while(num >= i ){
		printf("%d \n", num);
		printf("\n---\n");
		num--;	
	}
}
