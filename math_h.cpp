/*
	Name: Teste_biblioteca_math.cpp 
	Copyright: 
	Author: Pedro Leal
	Date: 02/05/25 12:41
	Description: Biblioteca math, estudos sobre.
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	double dizima;
	double a, b, c, d, e, loga;
	a = -4.0;
	b = 3.4;
	c = 54.6;
	d = 4.0;
	e = 16.0;
	loga = log(e) / log(d);
	
	dizima = a/b;
	puts("|--------------------------------------------|");
	puts("|-----------------BEM-VINDO------------------|");
	puts("|--------------------------------------------|");
	printf("|--|a=%.0lf|-|b=%.2lf|-|c=%.2lf|-|d=%.0lf|-|e=%.0lf|----|\n", a, b, c, d, e);
	printf("|teste de vaviavel double: %.15lf|\n", dizima); //lf = long float
	puts("|--------------------------------------------|");
	printf("potenciação: %.2lf | \n", pow(c, b));//para fazer potenciação
	puts("");
	printf("raiz quadrada de %.0f é %.2lf | \n", c, sqrt(c));//para fazer raiz quadrada
	puts("");
	printf("raiz quadrada de %.0f é %.2lf | \n", b, sqrt(b));//para fazer raiz quadrada
	puts("");
	printf("valor absoluto de %.2lf é: %.2lf | \n", a ,fabs(a)); //Retorna o valor absoluto de a, sempre positivo, mesmo que o número seja negativo.
	puts("");
	printf("valor absoluto de %.2lf é: %.2lf | \n", b ,fabs(b)); //Retorna o valor absoluto de b, sempre positivo, mesmo que o número seja negativo.
	puts("");
	printf("%.2lf arredondado para cima é de: %.2lf | \n", b, ceil(b));//retorna o valor arredondado para 
	puts("");
	printf("%.2lf arredondado para baixo é de: %.2lf | \n", c, floor(c));//retorna o valor arredondado para baixo
	puts("");
	printf("%.2lf arredondado para o número inteiro mais próximo é: %.2lf | \n", c, round(c));//retorna o valor arredondado para o número inteiro mais próximo
	puts("");
	printf("%.2lf arredondado para o número inteiro mais próximo é: %.2lf | \n", b, round(b));//retorna o valor arredondado para o número inteiro mais próximo
	puts("");
	printf("Valor de pi: %lf | \n", M_PI);//retorna a constante de PI
	puts("");
	printf("o log de %.2lf é: %.2lf \n", c, log(c));//log na base natural
	puts("");
	printf("o log de %.0lf base %.0lf é de: %.0lf\n", d, e, loga);//para saber o valor de log de d na base e
	puts("");
	printf("o log de %.2lf na base 10 é: %.2lf \n", c, log10(c));//log base 10



	 

	
	
	
}
