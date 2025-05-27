/*
	Name: Conversorbinario.cpp
	Author: Pedro Leal
	Date: 27/05/25 11:35
	Description: Programa para um número inteiro positivo e convertê-lo para seu equivalente binário, aula 27-05-2025
*/

#include <stdio.h>

main(){
	int vet[30];
	int i = 0;
	int num, num_og, resto, quoc;
	num = num_og = resto = quoc = 0;
	
	printf("Digite um numero par converte-lo para binario: ");
	scanf("%d", &num);
	num_og = num;
	do
	{
		quoc = num/2;
		resto = num - (quoc * 2);
		vet[i] = resto;
		num = quoc;
		i++;
	}while(num >= 2);
	vet[i] = num;
	
	puts("Carga do vetor:");
	for(i = 0; vet[i] == 0 || vet[i] == 1 ; i++)
	{
		printf("|%d|", vet[i]);
	}
	
	
	printf("\n binario de %i: \n", num_og);
	
	for(i = i - 1; i >= 0 ; i--)
	{
		printf("|%d|", vet[i]);
	}
	
}//FIM.

