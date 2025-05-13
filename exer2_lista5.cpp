/*
	Name: Exer2_lista5.cpp
	Author: Pedro Leal
	Date: 13/05/25 19:42
	Description:  programa que leia sexo (M/F), idade e altura para 10 pessoas e armazene as respostas em três estruturas multivaloradas
	diferentes. Ao final, mostre os dados agrupados por usuário, separados por uma linha em branco (utilize a estrutura While).
*/

#include<stdio.h>

main(){
	int idade[10];
	float alt[10];
	char sexo[10];
	int tam = sizeof(idade)/sizeof(int);
	int i = 0;
	
	while(i < tam){
		
		printf("pessoa %i: \n", i+1);
		printf("digite sua idade: ");
		scanf("%i", &idade[i]);
		printf("digite a sua altura: ");
		scanf("%f", &alt[i]);
		
		while(sexo[i] != 'F' && sexo[i] != 'f' && sexo[i] != 'M' && sexo[i] != 'm') {
    	printf("Digite o sexo [F/M]: ");
    	scanf(" %c", &sexo[i]);
}
		
		
		
		i++;
	};
	
	i = 0;
	
	while(i < tam){
		printf("a pessoa %i: \n", i+1);
		printf(". Tem %i Anos \n", idade[i]);
		printf(". Tem %.2f de Altura \n", alt[i]);
		if(sexo[i] == 'F' || sexo[i] == 'f'){
			printf(". E é uma Mulher/Menina \n");
		}else if(sexo[i] == 'M' || sexo[i] == 'm'){
			printf(". E é um Homem/Menino \n");
		};
		i++;
	};
}
