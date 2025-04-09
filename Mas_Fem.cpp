/*
	Name: Masc_fem.cpp
	Author: Pedro Leal
	Date: 18/03/25 11:55
	Description: Programa para identificar o gênero do usuário a partir da resposta
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
            printf("Você é do sexo masculino.\n");
        } else if (sexo == 'F') {
            printf("Você é do sexo feminino.\n");
        } else {
            printf("Opção inválida. Por favor, digite apenas F ou M.\n");
        }
    }

    return 0;
}

