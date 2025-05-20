/*
	Name: Matriz1.cpp
	Author:Pedro Leal 
	Date: 20/05/25 09:39
	Description: Programa para demonstrar operações com matrizes
	Array bidimensional
*/


#include<stdio.h>
#include<locale.h>

//Matriz quadrada, quando as linhas e colunas são equivalentes 
main(){
	setlocale(LC_ALL, "portuguese");
	int mat[3][3];// primeira instrução sempre controla a quantidade de linhas e a segunda controla a quantidade de colunas: são 3 linhas e três colunas// // matriz quadrada de ordem 3
	int i, j, acum;
	int ordem = 3;
	i = j = acum = 0;//inicializando os índices com valor 0
	
	//conjunto de laços de repetição para preenchimento em linha, fazendo a carga na matriz
	
	do{
		do{
			printf("digite o elemento [%i][%i]: ", i, j);
			scanf("%i", &mat[i][j]); // para pegar o valor da matriz [i][j]
			j++; // j = j + 1
		}while(j < 3);
		j = 0;
		i++; // i = i + 1
	}while(i < 3);
	
	puts("matriz carregada!! \n");
	 //para mostrar a carga da matriz
	 
	 puts("carga da matriz:");
	for(i = 0; i < 3; i++){
		puts("");
		for(j = 0; j < 3; j++){
			printf("|%i|", mat[i][j]);
		};
	};
	puts("");
	
	//imprimir os elementos da diagonal principal = DP
	
	puts("\nPropriedade Diagonal principal: \n");
	
	for(i = 0; i < ordem; i++){
		for(j =0; j < ordem; j++){
			if(i == j){
				printf("|[%d][%d] = %d| \n", i,j,mat[i][j]);
				acum  = acum + mat[i][j];
			};
		};
	};
	printf("\na soma da DP é de: %d \n", acum);
	
	i = j = acum = 0;
	
	puts("\n (WHILE/FOR)Elementos da Diagonal Secundária: ");
	
	while(i < ordem)
	{
		for( j = 0; j < ordem; j++)
		{
			if(i + j == ordem - 1)
			{
				printf("|[%d][%d] = %d| \n", i,j,mat[i][j]);
				acum  = acum + mat[i][j];
			}
		};
	j = 0;
	i++;
	};
	
	printf("\na soma da DS é de: %d \n", acum);
	
	i = j = acum = 0;
	
	printf("\n (DO....WHILE/FOR), elementos acima da DP: \n");
	
	
	do{
		while(j < ordem)
		{
			if(i < j )
			{
				printf("|[%d][%d] = %d| \n", i,j,mat[i][j]);
				acum  = acum + mat[i][j];
			};
		j++;
		}
	j = 0;
	i++;
	}while(i < 3);
	
	printf("\na soma acima da DP é de: %d \n", acum);

	
	i = j = acum = 0;
	
	
	printf("\n (DO....WHILE/FOR), elementos abaixo da DP: \n");
	
	
	do{
		for(j = 0; j < ordem; j++)
		{
			if(i > j )
			{
				printf("|[%d][%d] = %d| \n", i,j,mat[i][j]);
				acum  = acum + mat[i][j];
			};
		};
	i++;
	}while(i < 3);
	
		printf("\na soma ABAIXO DA DP é de: %d \n", acum);
	
	printf("\n (FOR/DO....WHILE), elementos acima da DS: \n");
	
	i = j = acum = 0;
	for(i = 0; i < ordem; i++)
	{
		j = 0;
		do
		{
			if( (i + j) < (ordem - 1)){
				printf("|[%d][%d] = %d| \n", i,j,mat[i][j]);
				acum  = acum + mat[i][j];
			};
		j++;
		}while(j < ordem);
		
	};
	
	printf("\na soma ACIMA DA DS é de: %d \n", acum);
	
	printf("\n (FOR/WHILE), elementos abaixo da DS: \n");
	i = j = acum = 0;
	
	for(i = 0; i < ordem; i++)
	{
		j = 0;
		while(j < ordem)
		{
			if( (i + j) > (ordem - 1))
			{
				printf("|[%d][%d] = %d| \n", i,j,mat[i][j]);
				acum  = acum + mat[i][j];
			};
		j++;
		};
		
	};
	printf("\na soma ABAIXO DA DS é de: %d \n", acum);
	
	
	
	
				
	
	
			
	
	
	
}//Fim.
