/*
	Name:Fatorial.cpp 
	Author: Pedro Leal
	Date: 07/05/25 13:20
	Description: Calcular n! com for, while e do while. 
*/

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	//valores unsigned long long é uma variavel que representa um número inteiro sem sinal (ou seja, somente positivo ou zero) e com 64 bits de tamanho, permitindo armazenar números muito grandes.
	unsigned long long n = 0; //número imposto pelo usuario, para usar no calculo de fatorial
	unsigned long long i = 0; //iterador para auxiliar 
	unsigned long long fat = 0; //onde irei armazenar os resultados, até em fim ter o resultado do fatorial
	
	printf("Qual é o número que irei fazer fatorial com for: ");
	scanf("%llu", &n);
		
	for(i = n; i > 0; i--){// explicação da lógica: para i recebendo o valor de n, enquanto o mesmo for maior que 0, subtraia 1 do i
		if(fat == 0){//se o valor de fat for igual á 0 adicione o valor de n ao mesmo, para o primeiro resultado da multiplicação não comprometer o valor final, ex: 5!= i(5) * fat(0) = fat(0) * i(4) = fat(0) * i(3) = fat(0) * i(2) = fat(0) * i(1) = fat(0);
			fat = n;
		}else{ //senão, fat = oq ele tinha antes vezes o iterador que, ex: 5! = fat(5) * i(4) = fat(20) * i(3) = fat(60) * i(2) = fat(120) * i(1) = fat(120);
		fat = fat * i;
			};
	};
	
	printf("%llu! = %llu \n\n", n, fat);
	
	n = i = fat = 0;
	
	printf("Qual é o número que irei fazer fatorial com while: ");
	scanf("%llu", &n);
	i = n; //para i receber o valor de n
	
	
	while( i > 0){
		if(fat == 0){//se o valor de fat for igual á 0 adicione o valor de n ao mesmo, para o primeiro resultado da multiplicação não comprometer o valor final, ex: 5!= i(5) * fat(0) = fat(0) * i(4) = fat(0) * i(3) = fat(0) * i(2) = fat(0) * i(1) = fat(0);
			fat = n;
		}else{ //senão, fat = oq ele tinha antes vezes o iterador que, ex: 5! = fat(5) * i(4) = fat(20) * i(3) = fat(60) * i(2) = fat(120) * i(1) = fat(120);
		fat = fat * i;
			}
		i--; // para decrementar o valor de i
	};
	
	printf("%llu! = %llu \n\n", n, fat);
	
		n = i = fat = 0;
	
	printf("Qual é o número que irei fazer fatorial com  do...while: ");
	scanf("%llu", &n);
	i = n; //para i receber o valor de n
	
	do{
		if(fat == 0){//se o valor de fat for igual á 0 adicione o valor de n ao mesmo, para o primeiro resultado da multiplicação não comprometer o valor final, ex: 5!= i(5) * fat(0) = fat(0) * i(4) = fat(0) * i(3) = fat(0) * i(2) = fat(0) * i(1) = fat(0);
			fat = n;
		}else{ //senão, fat = oq ele tinha antes vezes o iterador que, ex: 5! = fat(5) * i(4) = fat(20) * i(3) = fat(60) * i(2) = fat(120) * i(1) = fat(120);
		fat = fat * i;
			}
		i--;
	}while(i > 0);
	
	printf("%llu! = %llu \n\n", n, fat);
	
	
}//FIM.
