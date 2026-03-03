/*
	Name: pilha.cpp	
	Author: Pedro Leal
	Date: 03/03/26 10:55
	Description: 	Implementação do conceito de pilha - LIFO (Last in first out
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//area p/ prototipação de funções
void push(int); //Função que insere na pilha
int pop();//Função que retira um elemento da pilha
int isFull();//testa se a pilha está cheia
int isEmpty();//testa se a pilha está vazia
void exibirPilha();//mostra todo o conteúdo da pilha
void menu();

//Variáveis gloais
int pilha[5];
int topo = -1;

main()
{
	setlocale(LC_ALL, "portuguese");
	menu();
}//fim main

//corpo das fuções
void menu()
{
	int menu = 0;int elemento = 0;
	for(int i = 0; true; i++)
	{
	system("cls");
	printf("=================================\nEscolha a ação que deseja fazer:\n=================================\n[1]Inserir na tabela\n[2]retirar da tabela\n[3]Exibir pilha\n[4]fechar programa\n=================================\ndigite sua escolha: ");
	scanf("%i", &menu);
	
	
	
	switch(menu)
	{
		case 1: 
			printf("\nValor a ser inserido: ");scanf("%d", &elemento);
			push(elemento);
			break;
		case 2:
			pop();
			break;
		case 3:
			exibirPilha();
			break;
		case 4: exit(0);
		default:
			printf("error");
	};//fim switch
	
	system("pause");
	}//fim laço
	
}//fim menu
//Função que insere na pilha
void push(int elem)
{
	if(isFull() == 1)
	{
		puts("\nStack Overflow - Lifo cheia!");
	}
	else
	{
		topo++;//leva topo para 0
		pilha[topo] = elem;
		printf("\n Elemento %d inseido na pilha \n", elem);
		
	}
}

//Função que retira um elemento da pilha
int pop()
{
	if(isEmpty() == 1)
	{
		puts("	Lifo está vazia!");
	}
	else
	{
		int elemento = pilha[topo];
		topo--;
		printf("%d foi removido\n", elemento);
		return elemento;
	}
}

//testa se a pilha está cheia
int isFull()
{
		if (topo == 4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//testa se a pilha está vazia
int isEmpty()
{
	if (topo == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

//mostra todo o conteúdo da pilha
void exibirPilha()
{
	if(isEmpty() == 1)
	{
		printf("Está vazia!!!!!!!!!!");
	}
	else
	{
		puts("\n==> conteúdo da pilha: ");
		for(int i = topo; i >=0; i--)
		{
			printf("%d\n", pilha[i]);
		}
	}
}
