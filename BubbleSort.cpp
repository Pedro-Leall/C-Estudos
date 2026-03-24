/*
	Name: BubbleSort.cpp
	Author: Pedro Leal
	Date: 24/03/26 11:02
	Description: Programa oara demonstrar o funcionament do método de ordenação chamado Bubble Sort (Método da Bolha)
*/

#include <stdio.h>
 main()
 {
 	int vet[] = {17, 38, 12, 2, 44, 25, 19, 10, 30, -4};
 	int tam = sizeof(vet)/sizeof(int);
 	int i, aux= 0;
 	int comp, trocas = 0;
 	
 	/*puts("vet OG:");
 	for(i=0; i < tam; i++)
 	{
 		printf("%d|", vet[i]);
	 }
	 i = 0;
	 */
	 //Método de ordenação
	 do{
	 
	 while (i<tam-1)
	 {
	 	comp++;
	 	if(vet[i] > vet[i+1])
	 	{
	 		aux = vet[i];
	 		vet[i] = vet[i+1];
	 		vet[i+1] = aux;
	 		trocas++;
		}
		i++;
	 }
	 
	 	puts("");
 	for(i=0; i < 10; i++)
 	{
 		printf("%d|", vet[i]);
	 }
	 i = 0;
	 tam --;
	 }while(tam > 0); //fim do while
	 
	 printf("\n\nComparações: %d | Trocas: %d", comp, trocas);
 }//fim do main
