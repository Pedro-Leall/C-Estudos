/*
	Name:  contagem_foguete.cpp
	Author: Pedro Leal
	Date: 01/04/25 12:30
	Description: programa para fazer uma contagem regressiva para um foguete: 10 9 8 7 6 5 4 3 2 1 FOGO!!
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese"); 
	int num = 0;
	int i = 0;
	printf("Querido USER, digite um valor inteiro positivo: ");
	scanf("%d", &num);
	

	for(i = 1  ; num >= i; num-- ){
		printf("%d ", num);
	}
	printf("FOGO!!");
}

