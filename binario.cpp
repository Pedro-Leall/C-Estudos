/*
	Name: Binario.cpp
	Copyright: 
	Author: Pedro leal
	Date: 01/05/25 16:57
	Description: Programa para converter de base 10 para binario
*/

#include<stdio.h>
#include<locale.h>

main(){

	
	int num;
	int vet[4];
	int i;
	int acum;
	
	i = 0;
	num = 0;
	
	while(i < 4){
		vet[i] = 0;	
		i++;
	};
	
	printf("Digite um valor inteiro possitivo até 15: ");
	scanf("%i", &num);
	
	i = 0;
	
	while(i < 4){
		
		if (i == 0){	
		
		acum = num/2;
		vet[i] = num%2;
		}else{
			vet[i] = acum%2;
			acum = acum/2;
		}
		
		i++;
	};
	
	
	
	
    i = 3;
    while(i >= 0){
        printf("%i", vet[i]);
        i--;
    }


}
