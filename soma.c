/**
*Programa: primeiro programa na linguagem C, para a soma de dois numero;
*Author....: Aluno Fatec SPB Pedro Leal;
*Data....: Criado em 25 de Fevereiro de 2025;
* 
* 
*
* Antes de executar o programa ele precisa ser compilado, para que o código seja transformado em linguagem de maquina 
* O arquivo com código feito em linguagem C ele tem "nome.extensão - nome.C"
**/

#include <stdio.h> //Standard Input Output (entrada e saida padrão), em basicamente todo programa será nescessário essa biblioteca
int main() //função principal da linguagem C - Tudo começa a partir dela 
{
    //Declaração de variáveis
     int a, b, soma;
     a = 0; //a Recebe 0, a = primeiro Número
     b = 0; //segundo número
     soma = 0; //soma
     
     puts("Bem-Vindo ao seu local de soma:");
     puts("-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");
     puts("Qual será o primeiro Número:");
     scanf("%d",&a); /*leia a; para entrada de dados nunca esqueça do &
            ler um numero do teclado e armazenar na var a     
     */
     
     puts("Qual será o segundo Número:");
     scanf("%d", &b);
     
     soma = a + b;
     
     //exibir o resultado na tela
     printf("Resultado da soma de %d e %d é: %d", a, b, soma);
     puts("-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
     printf("fim do programa.................");
    
     return soma;
     
}//fim do programa 

