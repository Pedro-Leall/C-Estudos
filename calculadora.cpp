/*
	Name: calculadora.cpp
	Copyright: 
	Author: Pedro leal
	Date: 01/05/25 22:17
	Description: Programa para recriar uma calculadora
*/

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, result;
	int escolha;
	
	num1 = num2 = escolha =result = 0;
	
	puts("BEM-VINDO À SUA CALCULADORA PESSOAL");
	puts("-------------------------------------------------------------------------------");
	puts("|ESCOLHA UMA DAS OPÇÕES LOGO ABAIXO (Por favor responda só o número)           |");
	puts("|1-----------------SOMA [+]                                                    |");
	puts("|2-----------------SUBTRAÇÃO [-]                                               |");
	puts("|3-----------------DIVISÃO [/]                                                 |");
	puts("|4-----------------MULTIPLICAÇÃO [X]                                           |");
	puts("|5-----------------MÓDULO [RESTO DA DIVISÃO]                                   |");
	puts("-------------------------------------------------------------------------------");
	puts("--------");
	scanf("%i", &escolha);
	
	switch (escolha){
		case 1:
			printf("Digite o Primeiro valor: ");
			scanf("%i", &num1);
			printf("Digite o segundo valor: ");
			scanf("%i", &num2);
			result = num1 + num2;
			printf("o resultado da soma é igual á: %i", result);
			break;
		case 2:
			printf("Digite o Primeiro valor: ");
			scanf("%i", &num1);
			printf("Digite o segundo valor: ");
			scanf("%i", &num2);
			result = num1 - num2;
			printf("o resultado da subtração é igual á: %i", result);
			break;
		case 3:
			printf("Digite o Primeiro valor: ");
			scanf("%i", &num1);
			printf("Digite o segundo valor: ");
			scanf("%i", &num2);
			result = num1 / num2;
			printf("o resultado da divisão é igual á: %i", result);
			break;
		case 4:
			printf("Digite o Primeiro valor: ");
			scanf("%i", &num1);
			printf("Digite o segundo valor: ");
			scanf("%i", &num2);
			result = num1 * num2;
			printf("o resultado da multiplicação é igual á: %i", result);
			break;
		case 5:
			printf("Digite o Primeiro valor: ");
			scanf("%i", &num1);
			printf("Digite o segundo valor: ");
			scanf("%i", &num2);
			result = num1 % num2;
			printf("o resultado do resto da divisão é igual á: %i", result);
			break;
			
		default:
			printf("ERRO");
				
	};
	
}

