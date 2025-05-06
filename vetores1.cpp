/*
	Name: Vetores1.cpp 
	Author: Pedro Leal
	Date: 06/05/25 09:44
	Description: programa da a 06/05/2025
*/

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int veti[10]; //declaração do vetor inteiro com 10 possições
	int tam = sizeof(veti)/sizeof(int); /* calcular a quantidad de elementos no vetor, sizeof pega o valor de bytes que uma variavel está usando, cada dado int tem o valor de 4bytes 
	logo,  PARA SABER O TAMANHO DO VETOR PEGAMOS OS BYTES QUE ELE ESTÁ USANDO E DIVIDIMOS POR UMA VARIAVEL INT, QUE TERÁ O VALOR DE 4*/
	printf("o tamanho do vetor é de: %i \n\n", tam);
	int i = 0;//declaração da variável de iteração
	int acum = 0;//variavel para a acumulação da soma de todos os valores
	int cont = 0;//contador para a média aritimetica
	float acumM = 0.0;//variavel para a acumulação da soma de todos os valores
	
	
	while(i < tam)
	{//fazer a carga do vetor com while
		
		printf("|digite o %i°: |", i);
		scanf("%i", &veti[i]);
		i++;
	};
	
	puts("\nVetor carregado com sucesso!!!! \n");
	
	
	i = 0;	//para zerar o iterador
	
	for(i = 0; i < tam; i++)
	{//exibindo o conteúdo com for
		printf("|%i|", veti[i]);
	};
	
	puts("\nAgora lhe mostrarei de trás para frente:\n");
	
	i = 9;// i = 9, para que o do while possa trabalhar com i >= 0
	
	do
	{
		printf("|%i|", veti[i]);
		i--;
	}while(i >= 0);//exibindo o conteúdo ao contrario com do while
	
	i = 0;
	
	puts("\n números pares: \n");
	
	while(i < tam)
	{//para imprimir apenas os valores pares
		
		if (veti[i] % 2 == 0) { //caso o resto da divisão do valor por 2 for de 0 o mesmo será par
			printf("|%i|", veti[i]);
		};
		i++;
	};
	
	i = 0;
	
	puts("\n números impares: \n");
	
		do
		{
			if(veti[i]%2 == 1){ //caso o resto da divisão do valor por 2 for de 1 o mesmo será impar
			printf("|%i|", veti[i]);
		};i++;
		
		
		
		}while(i < 10);//para imprimir apenas os valores impares
		
		for(i = 0; i < tam; i++)
		{//para somar todos os valores do vetor
			acum = acum + veti[i];//acum = oq ele tinha + o valor do vetor de "i"
		};
		
		puts("\n o resultado da soma de todos os númeos é: \n");

		printf("\n| %i + %i + %i + %i + %i + %i + %i + %i + %i + %i = %i | \n", veti[0], veti[1], veti[2], veti[3], veti[4], veti[5], veti[6], veti[7], veti[8], veti[9], acum);
		
		
		puts("\n Média Aritimética dos números impares: \n");
		
	
		i = 0;
	
		do
		{
			
		if(veti[i]%2 == 1){ //caso o resto da divisão do valor por 2 for de 1 o mesmo será impar
		acumM = acumM + veti[i];
		cont++;
		};
		
		i++;
		
		}while(i < tam);
		
		acumM = acumM / cont;
		printf("|%.1f|", acumM );
		
		
			
		
	
	

	}//fim do programa
