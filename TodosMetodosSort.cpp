/*
	Name: TodosMetodosSort.cpp
	Author: Pedro Leal
	Date: 31/03/26 11:52
	Description: Neste programa iremos apresentar o desempenho de todos os metodos de ordenação
*/

//area de prototipação
	void selectionSort(int *, int);
	void bubbleSort(int *, int);
		
	#include <stdio.h>
	#include <windows.h>
	#include <stdlib.h>
	#include <time.h>
	 
	 main()
	 	{
			int vet [100000];
		int tam = sizeof(vet)/sizeof(int);
		
		srand(time(NULL));//plantar uma semente baseado no tempo
		for(int p = 0; p < tam; p++)
		{
			vet[p] = rand()%100; //geração de número random
		}
			
			selectionSort(vet, tam);
			bubbleSort(vet, tam);
	 	}//fim main
	 
	 //fução com o aloritmo do selection sort
	
	void selectionSort(int *S, int tam)
	{
		clock_t inicio = clock(); // Marca o tempo de início
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
			
		};//fim do fro externo 
	
		printf("\ntrocas= %d comparacoes = %d", troca, comp );
	 clock_t fim = clock(); // Marca o tempo final
	 // Calcula tempo em segundos
    double tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;
	printf("\ntempo: %.2f", tempo_decorrido);
	}//fim da função
	
	void bubbleSort(int *v, int tam)
 {
 	clock_t inicio = clock(); // Marca o tempo de início
 	int i, aux= 0;
 	int comp, trocas;
 	comp = trocas = 0;
 	i = 0;
 	do{
	 i = 0;
	 while (i < tam-1)
	 {
	 	comp++;
	 	if(v[i] > v[i+1])
	 	{
	 		aux = v[i];
	 		v[i] = v[i+1];
	 		v[i+1] = aux;
	 		trocas++;
		}//fim if
		i++;
	 }//fim do while
	 
	 tam --;
	 
	 }while(tam > 0); //fim do while
	 printf("\ntrocas= %d comparacoes = %d", trocas, comp);
	 clock_t fim = clock(); // Marca o tempo final
	 // Calcula tempo em segundos
    double tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;
	printf("\ntempo: %.2f", tempo_decorrido);
	 
 };//fim do bubble
