/*
	Name: random
	Copyright: 
	Author: Pedro Leal
	Date: 03/05/25 15:56
	Description: teste de n�mero random
*/

#include<stdio.h>
#include<stdlib.h> //biblioteca para rodar a variavel randomica
#include<locale>

main(){
	setlocale(LC_ALL, "portuguese");
	int num = 0;
	int ram = rand()%1000; // o valor que vier p�s a porcentagem dita at� qual n�mero o valor randomico vai
	int i = 1;
	puts("----------------------------------------------------------------------------------------------");
	puts("|  Bem-Vindo ao seu portal do desconhecido, tente acertar o n�mero aleatorio entre 0 e 1000  |");
	puts("----------------------------------------------------------------------------------------------");

	
	while(num != ram){
		printf("|Tentativa %d: ", i);
		scanf("%d", &num);
		
		if(num < ram)
		{
			printf("|o n�mero � maior\n");
		}
		else if(num > ram)
		{
			printf("|o n�mero � menor\n");
		}
		i++;
	};
	printf("|Parabens!");
}

