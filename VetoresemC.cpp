/*
	Name: Estudo vetores
	Copyright: 
	Author: Pedro Leal
	Date: 01/05/25 16:40
	Description:programa para estudo de vetores unidimensionais
*/

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int vet[7];
	int i;
	i = 0;
	
	while(i < 8){
		printf("Digite o valor do vetor, indice %i : \n", i);
		scanf("%i", &vet[i]);	
		i++;
	};
	
	i = 0;
	
	while(i < 8){
		printf("O vetor de indice %i é de %i \n", i, vet[i]);
		i++;
	}
	
	
}
