/*
	Name: Heeap_sort.cpp
	Author: Pedro Leal
	Date: 05/05/26 11:23
	Description: Programa para demonstrar o metodo de ordenação heap sort
*/

#include <stdio.h>
#include <stdlib.h>

// Seção de prototipação
void heapfy(int *, int, int);
void heapSort(int *, int);
void swap(int *, int *);
void imprimir(int *);


int tam; 

int main()
{
	int vet[100000];
	tam = sizeof(vet) / sizeof(int);
	
	int d;
	for(d = 0; d < tam; d++)
	{
		vet[d] = rand()%100; //geração de número random
	};
	
	
	puts("Vetor Og: ");
	imprimir(vet);
	
    printf("\n"); // Quebra de linha para ficar mais limpo
    
	heapSort(vet, tam);
	
	puts("Vetor post: ");
	imprimir(vet);
	
}//fim main


// Corpo das funções

// Função para troca de posições (swap)
void swap(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}

// Função que faz heapfy (testa se o pai é maior que o filho - max heap)
void heapfy(int *v, int n, int i)
{
	int maior = i; // inicializa o maior como raiz
	int esquerda = 2 * i + 1; // indice do filho da esquerda 
	int direita = 2 * i + 2; // indice do filho da direita
	
	// se filho da esquerda for maior que pai
	if(esquerda < n && v[esquerda] > v[maior])
	{
		maior = esquerda;
	}
	// se filho da direita for maior que pai (Corrigido para < n)
	if(direita < n && v[direita] > v[maior])
	{
		maior = direita;
	}
	
	if(maior != i) 
	{
		swap(&v[i], &v[maior]);

		heapfy(v, n, maior); 
	}
}//fim heapfy

// Função principal que monta a arvore (Corrigido o nome de heap_Sort para heapSort)
void heapSort(int *V, int n)
{
	int i;
	
	// 1. constroi um Max Heap
	for(i = n/2 - 1; i >= 0; i--)
	{
		heapfy(V, n, i);
	}
	
	// 2. troca a raiz com o último elemento e reduz a árvore (heap)
	for(i = n - 1; i > 0; i--)
	{
		// move o elemento array 
		swap(&V[0], &V[i]);
		// invoke da função heapfy na raiz para restaurar a propriedade do heap 
		heapfy(V, i, 0);
	}
}//fim heap sort

void imprimir(int *v)
{
	int i;
	for(i = 0; i < tam; i++)
	{
		printf("|%d|", v[i]);
	}
	printf("\n"); // Adicionada quebra de linha no final da impressão
}//fim imprimir
