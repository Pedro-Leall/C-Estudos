/*
	Name: QUICK_SORT.cpp
	Author: Pedro Leal
	Date: 12/05/26 11:39
	Description: este programa tem como objetivo demonstrar o quick sort
*/


#include <stdio.h>
#include <locale.h>

//sessão de prototipação

void swap(int *, int*); // troca elementos
int partition(int *, int, int);
void quickSort(int *, int, int);

main()
{
	setlocale(LC_ALL, "portuguese");
	int vet[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	int tam = sizeof(vet)/sizeof(int);
	
	puts("Vetor OG: ");
	for(int i = 0; i < tam; i++)
	{
		printf("|%d|", vet[i]);
	}; //fim for de print
	
	quickSort(vet, 0, tam-1);
	
	puts("\nVetor Pós quick Sort: ");
	for(int i = 0; i < tam; i++)
	{
		printf("|%d|", vet[i]);
	}; //fim for de print
	
	
	
};//Fim main

//Corpo das funções

//Função responsável pela troca de elementos entre si
void swap(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
		
}//fim swap

//funução que faz a partição de conjunto de dados
int partition(int* V, int inicio, int fim)
{
	int pivot = V[inicio]; //primeiro elemento como pivot
	int i = fim + 1;
	
	for (int j = fim; j >= inicio + 1; j--)
	{
		if (V[j] >= pivot)
		{
			i--;
			swap(&V[i], &V[j]); // Fazendo a troca
		}
	}
	swap(&V[i-1], &V[inicio]); // Faz a troca de pivot, toda vez que a condição do
	
	return (i-1);
}//fim partition



//função principal do quick sort
void quickSort(int* V, int inicio, int fim)
{
	if(inicio < fim)
	{
		int pivot = partition(V, inicio, fim); //variavel pivot receber o return de partition
		quickSort(V, inicio, pivot - 1); //lado esquerdo
		quickSort(V, pivot + 1, fim); //lado direito
	};
	
}//fim quickSort

