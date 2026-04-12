/*
	Name: fila_revisao.cpp
	Author: Pedro Leal
	Date: 12/04/26 18:38
	Description: Programa feito para revisar o conceito de fila para a p1 de estrutura de dados, estrutura montada sem auxilio de materias de revisao (anotações, blogs, IAs...)
*/

//área das variáveis globais
int fila[5];
int tam = 5;
int inicio = -1;
int fim = -1;


//área de prototipação de funções

int Enqueue(int);
void Dequeue();
int isFull();
int isEmpty();
void printar();

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese"); //para aceitar pt-br utf-8
	
	Enqueue(100);
	Enqueue(23);
	Enqueue(7);	
	Enqueue(5);
	Enqueue(90);
	printar();
	
};//fim main

//corpo das funções

int Enqueue(int elem)
{
	if(isFull() == 1)
	{
		printf("fila está cheia!!! :(");
	}else
	{
		fila[fim+1] = elem;
		fim = (fim+1)%tam;
	}
	
	printf("\n%d número inserido a fila", elem);
	
};//Fim Enqueue

void Dequeue()
{
	int elem = 0; // p/ guardar o elemento que será excluida
	if(isEmpty() == 1)
	{
		printf("fila está vazia");	
	}
	 else
	 {
	 	elem = fila[inicio]; //guardando o elemento que será excluido
	 	if(inicio == fim) //verificando se o fim e o inicio apontam para o mesmo número, caso isso seja verdade significa que a fila ficara vazia após isso, logo temos de enviar os indices p/ -1, que aponta para fila vazia
	 	{
	 		inicio = -1;
	 		fim = -1;
		}
		else
		{
			inicio = (inicio+1)%tam;
			printf("\n%d é o próximo", elem);
		}
	 };//fim do if
	 
};//fim Dequeue

int isFull()
{
	if(inicio == tam)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
};//fim isFull

int isEmpty()
{
	if(inicio == -1 && fim == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
};//fim isEmpty

void printar()
	{
	if(isEmpty()==1)
	{
		printf("a fila está vazia");
	}
	else
	{
		for(int i = 0; i < tam; i++)
		{
			printf("\n%d|", fila[i]);
		};//fim for
	}
	};//fim printar
