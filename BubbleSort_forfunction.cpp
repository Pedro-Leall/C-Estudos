/*
	Name: BubbleSort_forfunction.cpp
	Author: Pedro Leal
	Date: 24/03/26 11:02
	Description: Programa oara demonstrar o funcionament do método de ordenação chamado Bubble Sort (Método da Bolha)
*/

#include <stdio.h>
#include <windows.h> 
#include <time.h>

// variáveis globais
int comp = 0, trocas = 0;

// protótipo da função
void bubbleSort(char*, int);
 main()
 { 	
    
 	//int vet[] = {17, 38, 12, 2, 44, 25, 19, 10, 30, -4};
 	//int vet[10000];
 	char vet[] = {'P', 'E', 'D', 'R', 'O'};
	int tam = sizeof(vet)/sizeof(char);
 	
 	/*srand(time(NULL));//plantar uma semente baseado no tempo
	for(int i = 0; i < tam; i++)
	{
		vet[i] = rand()%100; //geração de número random
	}*/
	puts("vet OG:");
 	for(int i=0; i < tam; i++)
 	{
 		printf("%c|", vet[i]);
	 };
	 
	  bubbleSort(vet, tam); //invoke
	 
	 puts("\nvet ordenado:");
 	for(int i=0; i < tam; i++)
 	{
 		printf("%c|", vet[i]);
	 }
	 //Método de ordenação
	 
	 printf("\n\nComparações: %d | Trocas: %d", comp, trocas);
 };//fim do main
 
 //função para o método Bubble Sort
 
 /*void bubbleSort(int *v, int tam)
 {
 	int i, aux= 0;
 	i = 0;
 	do{
	 i = 0;
	 while (i<tam-1)
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
	 */
	 
	 void bubbleSort(char *v, int tam)
 {
 	int i, aux= 0;
 	i = 0;
 	do{
	 i = 0;
	 while (i<tam-1)
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
	 
 }//fim do bubble
