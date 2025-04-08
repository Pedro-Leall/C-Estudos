/*
	Name: notas.cpp
	Author: Pedro Leal
	Date: 08/04/25 11:21
	Description: Programa para calcular médias de alunos
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float nota1, nota2, nota3, nota4, media, percent_Aprov, percent_Reprov, soma_med;
	int i, aprovados, reprovados, qtdExame, notaExame;
	
	nota1 = nota2 = nota3 = nota4 = media = soma_med = percent_Reprov = percent_Aprov = notaExame = 0.0;
	i = aprovados = reprovados = qtdExame = 0;
	
	while(i < 7)
	{
		printf("%d° aluno: \n", i+1);
		puts("--------------------------------");
		printf("Digite a 1a nota: \n");
		scanf("%f", &nota1);
		printf("Digite a 2a nota: \n");
		scanf("%f", &nota2);
		printf("Digite a 3a nota: \n");
		scanf("%f", &nota3);
		printf("Digite a 4a nota: \n");
		scanf("%f", &nota4);
		
		media = (nota1 + nota2 + nota3 + nota4)/4;
		
		if( media >= 6.0)
		{
			puts("APROVADO!!\n");
			aprovados++; 
			printf("sua média é: %1.f \n", media);
		}
		else if(media >= 4.0)
			 {
				puts("Em Recuperação\n");	
				qtdExame++;
				notaExame = 12.0 - media;
				printf("sua média é: %1.f \n", media);
			 }
			 else
			 {
			 	puts("VOCÊ FOI REPROVADO!!!! :(\n");
			 	reprovados++;
			 	printf("sua média é: %1.f \n", media);
			 }
	i++;
	}//fim while
	percent_Aprov = aprovados * (100 / 7);
	percent_Reprov = reprovados * (100 / 7);
	printf("Qtde Aprovados: %d - %.1f%%", aprovados, percent_Aprov);
	printf("\nQtde reprovados: %d - %.1f%%", reprovados, percent_Reprov);
	printf("\nQtde de alunos na recuperação: %d", qtdExame);
	
	
}//fim do programa



