/*
	Name: SelectionSort.cpp	
	Author: Pedro Leal		
	Date: 31/03/26 10:52
	Description: Programa par implementar o metódo de ordenação Selection Sort 
	*/
	
	
	//seção de prototipação
	void selectionSort(int *, int);
	
	#include <stdio.h>
	#include <windows.h>
	#include <stdlib.h>
	#include <time.h>
	
	main()
	{
		//int vet[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
		int vet [100000];
		int tam = sizeof(vet)/sizeof(int);
		
		srand(time(NULL));//plantar uma semente baseado no tempo
		for(int p = 0; p < tam; p++)
		{
			vet[p] = rand()%100; //geração de número random
		}
		
		
		
		puts("vet OG:");
 		for(int i = 0; i < tam; i++)
 		{
 			printf("%d|", vet[i]);
	 	}

		selectionSort(vet, tam);
		

		
	}//fim main

	//fução com o aloritmo do selection sort
	
	void selectionSort(int *S, int tam)
	{
		int chave, menor;
		int aux, troca, comp;
		troca = comp = 0;
		//laço externo que itera do inicio ao fim do vetor
		for(int i = 0; i < tam; i++)
		{
			//assume que o menor elemento está na primeira posição do vetor
			chave = i;
			menor = i + 1;
			//laço interno para localizar qm é o menor elemento do subconjunto
			for(int j = i+1; j < tam; j++)
			{
				if(S[j] < S[menor])
				{
					menor = j; //Guarda o indice do menor elemento do subconjunto
				}
				comp++;
			}//fim do for interno
			//troca o menor elemento encontrado com o elemento que está na chave (posição inicial)
			comp++;
			if(S[menor] < S[chave])	
			{
				troca++;
				aux = S[chave];
				S[chave] = S[menor];
				S[menor] = aux;
				
			}
			
		}//fim do fro externo 
		
		puts("\nvet post:");
 		for(int k = 0; k < tam; k++)
 		{
 			printf("%d|", vet[k]);
	 	}
		printf("\ntrocas= %d comparacoes = %d", troca, comp );
	}//fim da função
