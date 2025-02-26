/**
*Programa: programa na linguagem C, para calcular a área de um retangulo lendo frente (largura) e fundos (comprimento);
*Author....: Aluno Fatec SPB Pedro Leal;
*Data....: Criado em 25 de Fevereiro de 2025;
* 
* 
*
* Antes de executar o programa ele precisa ser compilado, para que o código seja transformado em linguagem de maquina 
* O arquivo com código feito em linguagem C ele tem "nome.extensão - nome.C"
**/
#include <stdio.h>

int main()
{
    float largura, comprimento, area;
    largura = 0.0;
    comprimento = 0.0;
    area = 0.0;
    
    puts("Bem-vindo\n Esse programa irá calcular a área de um retangulo com sua ajuda:");
    puts("-----------------------------------------------------------------------------");
    printf("largura: ");
    scanf("%f", &largura);
    printf("comprimento: ");
    scanf("%f", &comprimento);
    
    area = largura * comprimento;
    
    printf("Área do retângulo é igual %.2f", area);
}
