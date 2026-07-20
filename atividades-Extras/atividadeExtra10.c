/*Faça um algoritmo que vá receber dois números do tipo float digitado pelo usuário. Após isso, faça um menu que
que mostre as opções para o usuário: 1 - Soma, 2 - Subtração, 3 - Divisão, 4 - Multiplicação.
Faça esse algoritmo utilizando switch-case*/
#include <stdio.h>

int main(){
	float n1, n2;
	int opcao;
	printf("Numero 1 ");
	scanf("%f", &n1);
	
	printf("\nNumero 2 ");
	scanf("%f", &n2);
	
	printf("\n1 - Soma, 2 - Subtracao, 3 - Divisao, 4 - Multiplicacao ");
	scanf("%d", &opcao);
	
	switch(opcao){
	
		case 1:
			printf("\nSoma: %f", n1 + n2);
			break;
		case 2:
			printf("\nSubtracao: %f", n1 - n2);
			break;
		case 3:
			printf("\nDivisao: %f", n1 / n2);
			break;
		case 4:
			printf("\nMultiplicacao: %f", n1 * n2);
			break;
		}
	return 0;
}