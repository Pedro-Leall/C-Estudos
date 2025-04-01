/*
	Name: tabuada.cpp
	Author: Pedro Leal
	Date: 01/04/25 11:21
	Description: Programa para exibir a tabuda de multiplicaçao escolhido pelo user
*/

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int num = 0;
	int i = 1; //iterator/incremento
	int result = 0;
	
	printf("digite um número: ");
	scanf("%d", &num);
	
	
	do
	{
		result = i * num;
		printf("%d x %d = %d \n", num, i, result);
		
		i++;
	}while(i <= 10);
}
