/*
	Name: exer3_lista5.cpp
	Author: Pedro Leal
	Date: 28/05/25 14:05
	Description: programa que leia a altura de 7 pessoas, armazene em um vetor e depois mostre
	a média de todas alturas armazenadas no vetor. Para carregar o vetor utilize Do...While,
	para acumular a soma das alturas faça em outra estrutura de repetição, utilize For e ao
	final mostre o resultado do cálculo.
*/

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	float vet[3];
	int tam = sizeof(vet)/sizeof(int);
	int i = 0;
	float acum = 0;
	float med = 0.0;
	
	do
	{
		printf("altura da pessoa %i [x,x]: \n", i+1);
		scanf("%f", &vet[i]);
		acum = acum + vet[i];
		i++;
	}while(i < tam);
		
	med = acum / 3;
	printf("a media das alturas das %i pessoas é de: %.2f ", tam, med);

}//FIM.

