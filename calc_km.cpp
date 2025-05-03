/*
	Name: contador_de_km.cpp
	Author: Pedro Leal
	Date: 03/05/25 16:26
	Description: 
*/

#include<stdio.h>
#include<locale>

main(){
	setlocale(LC_ALL, "portuguese");
	
	float km, m, temp, km_h, m_m, m_s = 0.0;
	int escolha1, escolha2;
	
	puts("<|  Bem-vindo sua calculadora de km/h, M/m e M/s  |>");
	puts("");
	puts("\n");
	
	puts("Você percorreu metros ou quilometros [selecione a alternativa]: ");
	puts("1-Metros 2-KM \n");
	puts("\n");

	scanf("%i", &escolha1);
	
	switch (escolha1){
	
		case 1:
			printf("Quantos metros você percorreu: ");
			scanf("%f", &m);
			printf("E em quantas horas você fez %.0fm: ", m);
			scanf("%f", &temp);
			
			km_h = (m / 1000) / temp;
			m_m = (m / 1000) / (temp * 60);
			m_s = (km / 1000) / (temp * 60 * 60);
			
			printf("se em %.0fH você percorreu %.1fKm sua velocidade média foi de: <|%.1fkm/h|>\n", temp, km,km_h);
			printf("se em %.0fH você percorreu %.1fKm sua velocidade média foi de: <|%.2fm/M|>\n", temp, km,m_m);
			printf("se em %.0fH você percorreu %.2fKm sua velocidade média foi de: <|%.4fM/s|>\n", temp, km,m_s);
			break;
		case 2:
			printf("Quantos quilometros você percorreu: ");
			scanf("%f", &km);
			printf("E em quantas horas você fez %.0fkm: ", km);
			scanf("%f", &temp);
			
				km_h = km / temp;
				m_m = (km * 100) / (temp * 60);
				m_s = (km * 100) / (temp * 60 * 60);
			
			printf("se em %.0fH você percorreu %.1fKm sua velocidade média foi de: <|%.1fkm/h|>\n", temp, km,km_h);
			printf("se em %.0fH você percorreu %.1fKm sua velocidade média foi de: <|%.2fm/M|>\n", temp, km,m_m);
			printf("se em %.0fH você percorreu %.2fKm sua velocidade média foi de: <|%.2fM/s|>\n", temp, km,m_s);
	
			break;
		};	
};
