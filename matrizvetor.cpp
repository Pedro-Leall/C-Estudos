/*
	Name: matrizvetor.cpp
	Author: Pedro Leal
	Date: 27/05/25 09:53
	Description: Programa para fazer a carga em uma matriz com ordem definida pelo usuário e, após a carga passar todos os elementos  para o vetor (Array)
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int i, j, x;
	int ordem;
	i = j = ordem = 0;
	
	printf("Qual será a ordem da nossa matriz quadrada? \n");
	scanf("%d", &ordem);
	
	int mat[ordem][ordem];
	int vet[ordem*ordem];
	
	//fazer a carga na matriz
	
	printf("Digite %d elementos inteiros: \n", ordem*ordem);
	
	while(i < ordem)
	{
		while(j < ordem)
		{
			printf("[%d][%d]:", i, j);	
			scanf("%d", &mat[i][j]);
			vet[x] = mat[i][j];
			x++;
			j++;
		};
		j = 0;
		i++;
	};
	
	i = 0;
	puts("CARGA REALIZADA COM SUCESSO!!");
	puts(" ");
	puts("\n=======Conteudo da carga já realizda=========");
	puts("===============================================");
	
	do
	{
		for(j = 0; j < ordem; j++)
		{
			printf("[%i][%i]: %i \n", i, j , mat[i][j]);	
		};
		i++;
	}while(i < ordem);
	
	//exibir a carga do vetor
		puts("\n=======Conteudo do vetor=========");
	puts("===============================================");
	
	for(x = 0; x < ordem*ordem; x++)
	{
		printf("%d|", vet[x]);
	};
	
	
	
	
}//FIM.
