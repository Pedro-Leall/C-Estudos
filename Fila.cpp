/*
	Name: Fila.cpp
	Author: Pedro Leal		
	Date: 24/02/26 10:54
	Description: Programa para demonstrar o uso de Filas
*/

#include <stdio.h>
#include <locale.h>
//var global
int itens[5];
int inicio = -1;
int fim = -1;
int tam = 5;

//sessão de prototipação de funções
void Enqueue(int);//inserir elemento
int Dequeue();//retira um elemento da fila
int isFull();//retotna 1 se a fila estiver cheia
int isEmpty();//retorna 1 se a fila está vazia
void Imprimirfila();



main()
{	
	setlocale(LC_ALL, "Portuguese");
	Enqueue(100);
	Enqueue(101);
	Enqueue(102);
	Enqueue(103);
	Enqueue(104);
	Enqueue(105);
	Imprimirfila();
	Dequeue();
	Dequeue();
	Dequeue();
	Imprimirfila();
	Dequeue();
	Dequeue();
	
	Dequeue();//se vazio
	
	
}//fim do main


//função para inserir um elemento na fila
void Enqueue(int elem)
{
	if(isFull() == 1){
		puts("\nA fila está cheia");
	}
	else
	{
		if(inicio == -1)
			{
				inicio = 0;
			};
			
		fim = (fim + 1)%tam;
		itens[fim] = elem;
		printf("\nElemento %d inserido na FIFO", elem);
			

	}
};//fim enqueue

//função que retira um elemento da fila

int Dequeue()
{
	int elem;
	if(isEmpty() == 1) 
	{
		printf("\nA fila está vázia");
		return -1;
	}
	else
	{
		elem = itens[inicio];
		if(inicio == fim)
		{
			inicio = -1;
			fim -1;
		}
		else
		{
			inicio = (inicio+1)%tam;
		}
		printf("\n%d foi excluido da FIFO", elem);
	}
};//fim Dequeue

//função para verificar se a fila está cheia
int isFull()
{
	if((inicio == (fim+1)%tam) || (inicio == 0 && fim == tam-1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
};//Fim isFull

//função para verificar se a fila está vazia
int isEmpty()
{
	if(inicio == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
};// fim do isempty

//função para imprimir a fila

void Imprimirfila()
{
	int i;
	if(isEmpty() == 1)
	{
		puts("Está vazia");
	}
	else
	{
		puts("Conteúdo da FIFO: ");
		for(i = inicio; i != fim; i = (i+1)%tam)
			printf("%d |", itens[i]);
	}
};//fim do imprimirfila
