/*
	Name: random
	Copyright: 
	Author: Pedro Leal
	Date: 03/05/25 15:56
	Description: teste de número random
*/

#include<stdio.h>
#include<stdlib.h> //biblioteca para rodar a variavel randomica
#include<locale>

main(){
	setlocale(LC_ALL, "portuguese");
	int num = 0;
	int ram = rand()%1000; // o valor que vier pós a porcentagem dita até qual número o valor randomico vai
	int i = 1;
	puts("----------------------------------------------------------------------------------------------");
	puts("|  Bem-Vindo ao seu portal do desconhecido, tente acertar o número aleatorio entre 0 e 1000  |");
	puts("----------------------------------------------------------------------------------------------");

	
	while(num != ram){
		printf("|Tentativa %d: ", i);
		scanf("%d", &num);
		
		if(num < ram)
		{
			printf("|o número é maior\n");
		}
		else if(num > ram)
		{
			printf("|o número é menor\n");
		}
		i++;
	};
	printf("|Parabens!");
}

