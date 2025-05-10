/*
 *nome: exer1_lista5.cpp
 *autor: Pedro Leal
 *descrição: programa que faz carga de um vetor de tamanho 25 e leia ele ao contrario
 */ 
#include <stdio.h>

int main(){
    int vet[25];
    int tam = sizeof(vet)/sizeof(int);
    
    for(int i = 0;i < tam; i++){
        vet[i] = 0;
    };
    for(int i = 0;i < tam; i++){
        printf("Digite o valor da %i: ", i+1);
        scanf("%i", &vet[i]);
    };
    for(int i = tam;i >= 0; i--){
        printf("%i\n", vet[i]);
    }
}