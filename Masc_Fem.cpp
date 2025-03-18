/*
	Name: Masc_fem.cpp
	Author: Pedro Leal
	Date: 18/03/25 11:55
	Description: Programa para identificar o genero do usuario apartir dessa resposta 
*/

#include <stdio.h>
#include <locale.h>


main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char sexo, S1;
	sexo, S1 = ' ';
	
	puts("Digite o seu genero [F/M]");
	scanf("%c", &sexo);
	
	while (sexo || S1 != 'F' || 'f' || 'M' || 'm'){
		
		puts("ERRO, DIGITE NOVAMENTE [F/M]");
		scanf("%c", &S1);	
	};
	
	if(sexo || S1 == 'F' || 'f'){
		puts("Voce e uma muie");
	}else if(sexo || S1 == 'M' || 'm'){
		puts("voce e macho");
	     }else{
	     	puts("Voce e um helicoptero");
		 };
			
	
	
}//fim
