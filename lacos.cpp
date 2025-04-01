/*
	Name: Lacos.cpp
	Author: Pedro Leal
	Date: 01/04/25 09:49
	Description: programa para utilizar os 3 tipos de laço de repetição
*/

	#include <stdio.h>
	#include <locale.h>
	

main(){
	setlocale(LC_ALL,"portuguese");
	int num = 0;//declaração de var + atrib de valor;
	int cont = 0;
	printf("Digite um valor: ");
	scanf("%d", &num);
	
	//Repita... até, faz uma primeira vês antes da repetição indefinida;
	
	do
	{
		printf("Repita... até %d \n", cont);
		cont ++;
	}while(cont < num);
	
	cont = 0;//inicialização
	
	
	//Enquanto... Faça, repetição indefinida;
	
	while (cont < num)
	{
		printf("Enquanto... Faça %d \n", cont);
		cont ++;
	}
	
	
	//Para...faça, repetição exatas;
	
	for(cont = 0; cont < num; cont++)//inicialização; condição; incremento;
	{
		printf("Para...faça %d \n", cont);
	}

	
	

}//Fim
	

	


