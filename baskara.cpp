/*
	Name: Baskara.cpp
	Copyright: 
	Author: Pedro Leal
	Date: 02/05/25 11:58
	Description: estudos sobre a biblioteca math, com baskara
*/


#include<stdio.h>
#include<locale.h>
#include<math.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	double delta, a, b, c, pot, baskara1, baskara2;
	
	puts("BEM-VINDO Á SUA CALCULADORA DE BASKARA");
	puts("por favor digite o valor de a: ");
	scanf("%lf", &a);
	puts("por favor digite o valor de b: ");
	scanf("%lf", &b);
	puts("por favor digite o valor de c: ");
	scanf("%lf", &c);
	
	pot = pow(b,2);
	delta = pot - 4 * a * c; 
	baskara1 = (-b + sqrt(delta)) / (2 * a);
	baskara2 = (-b - sqrt(delta)) / (2 * a);
	

	
	if (delta < 0) {
    printf("Delta = %.0lf. A equação não possui raízes reais.\n", delta);
	} else {
    baskara1 = (-b + sqrt(delta)) / (2 * a);
    baskara2 = (-b - sqrt(delta)) / (2 * a);

    printf("delta: %.0lf \n", delta);
    printf("baskara xI é igual a %.2lf \n", baskara1);
    printf("baskara xII é igual a %.2lf\n", baskara2);
}

}
