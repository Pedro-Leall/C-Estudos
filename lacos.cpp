/*
	Name: Lacos.cpp
	Author: Pedro Leal
	Date: 01/04/25 09:49
	Description: programa para utilizar os 3 tipos de la�o de repeti��o
*/

	#include <stdio.h>
	#include <locale.h>
	

main(){
	setlocale(LC_ALL,"portuguese");
	int num = 0;//declara��o de var + atrib de valor;
	int cont = 0;
	printf("Digite um valor: ");
	scanf("%d", &num);
	
	//Repita... at�, faz uma primeira v�s antes da repeti��o indefinida;
	
	do
	{
		printf("Repita... at� %d \n", cont);
		cont ++;
	}while(cont < num);
	
	cont = 0;//inicializa��o
	
	
	//Enquanto... Fa�a, repeti��o indefinida;
	
	while (cont < num)
	{
		printf("Enquanto... Fa�a %d \n", cont);
		cont ++;
	}
	
	
	//Para...fa�a, repeti��o exatas;
	
	for(cont = 0; cont < num; cont++)//inicializa��o; condi��o; incremento;
	{
		printf("Para...fa�a %d \n", cont);
	}

	
	

}//Fim
	

	


