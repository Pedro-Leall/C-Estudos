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
	
	puts("BEM-VINDO � SUA CALCULADORA PESSOAL");
	puts("-------------------------------------------------------------------------------");
	puts("|ESCOLHA UMA DAS OP��ES LOGO ABAIXO (Por favor responda s� o n�mero)           |");
	puts("|1-----------------SOMA [+]                                                    |");
	puts("|2-----------------SUBTRA��O [-]                                               |");
	puts("|3-----------------DIVIS�O [/]                                                 |");
	puts("|4-----------------MULTIPLICA��O [X]                                           |");
	puts("|5-----------------M�DULO [RESTO DA DIVIS�O]                                   |");
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
			printf("o resultado da soma � igual �: %i", result);
			break;
		case 2:
			printf("Digite o Primeiro valor: ");
			scanf("%i", &num1);
			printf("Digite o segundo valor: ");
			scanf("%i", &num2);
			result = num1 - num2;
			printf("o resultado da subtra��o � igual �: %i", result);
			break;
		case 3:
			printf("Digite o Primeiro valor: ");
			scanf("%i", &num1);
			printf("Digite o segundo valor: ");
			scanf("%i", &num2);
			result = num1 / num2;
			printf("o resultado da divis�o � igual �: %i", result);
			break;
		case 4:
			printf("Digite o Primeiro valor: ");
			scanf("%i", &num1);
			printf("Digite o segundo valor: ");
			scanf("%i", &num2);
			result = num1 * num2;
			printf("o resultado da multiplica��o � igual �: %i", result);
			break;
		case 5:
			printf("Digite o Primeiro valor: ");
			scanf("%i", &num1);
			printf("Digite o segundo valor: ");
			scanf("%i", &num2);
			result = num1 % num2;
			printf("o resultado do resto da divis�o � igual �: %i", result);
			break;
			
		default:
			printf("ERRO");
				
	};
	
}

