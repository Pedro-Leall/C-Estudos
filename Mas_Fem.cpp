/*
	Name: Masc_fem.cpp
	Author: Pedro Leal
	Date: 18/03/25 11:55
	Description: Programa para identificar o g�nero do usu�rio a partir da resposta
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
    char sexo = ' ';

    while (sexo != 'M' && sexo != 'F') {
        printf("Escreva seu sexo: [F/M] \n");
        scanf(" %c", &sexo);

        if (sexo == 'M') {
            printf("Voc� � do sexo masculino.\n");
        } else if (sexo == 'F') {
            printf("Voc� � do sexo feminino.\n");
        } else {
            printf("Op��o inv�lida. Por favor, digite apenas F ou M.\n");
        }
    }

    return 0;
}

