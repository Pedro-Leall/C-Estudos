/*
 *	Name:  Maior_menor.cpp 
 *	Author: Pedro Leal
 *	Date: 18/03/25 11:30
 *	Description: Programa para ler dois numeros inteiros e apontar qual deles é o maior
*/

#include <stdio.h>

main(){
	int num1, num2;
	num1 = 0;
	num2 = 0;	/*Outra maneira de inicializar mais de uma variavel de uma vez, com o mesmo valor
     *num1 = num2 = 0;	
	*/

	puts("Digite o valor do primeiro numero: ");
	scanf("%i", &num1);
	puts("Digite o valor do segundo numero: ");
	scanf("%i", &num2);
	
	if(num1 > num2){
		printf("o numero maior e: %i", num1);
	}else if(num2 > num1){
		printf("o numero maior e: %i", num2);
		 }else{
	    	printf("Os números são iguais!!!!");
		}
	
}
